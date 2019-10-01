#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("Pooja SD");

MODULE_DESCRIPTION("A simple Hello world LKM!");

MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading hello module Pooja...\n");
	printk(KERN_INFO "hello world\n");
	return 0;
}

static void __exit hello_end(void)
{
	printk(KERN_INFO "Goodbye Ms.Pooja SD\n");
}
module_init(hello_start);
module_exit(hello_end);
