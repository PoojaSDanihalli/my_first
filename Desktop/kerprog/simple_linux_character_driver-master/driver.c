#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/usb.h>


static int pen_probe(struct usb_interface *interface,const struct usb_device_id *id)
{
 	printk(KERN_INFO "[*] SolidusCode Pen Drive (%04X:%04X) plugged\n",    id->idVendor,id->idProduct);
	return 0;
}

static void pen_disconnect(struct usb_interface *interface)
{
	printk(KERN_INFO "[*] SolidusCode Pen drive removed\n");
}


static struct usb_device_id pen_table[]={
	{ USB_DEVICE(0x090c,0x1000)},
	{}
};
MODULE_DEVICE_TABLE(usb,pen_table);


static struct usb_driver pen_driver =
{
	.name="SolidusCode-USB Stick-Driver",
	.id_table=pen_table,
	.probe=pen_probe,
	.disconnect=pen_disconnect,
};

static int __init pen_init(void)
{
	int ret=-1;
	printk(KERN_INFO "[*]soliduscode constructor of driver");
	printk(KERN_INFO "\tRegistering driver with kernel");
	ret=usb_register(&pen_driver);
	printk(KERN_INFO "\tRegisteration is complete");
	return ret;
}

static void __exit pen_exit(void){
	//deregister
	printk(KERN_INFO "[*]SolidusCode Destructor of Driver");
	usb_deregister(&pen_driver);
	printk(KERN_INFO "\tUnregistration complete!");

}
module_init(pen_init);
module_exit(pen_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("POOJASD");
MODULE_DESCRIPTION("USB pen Registration Driver");

