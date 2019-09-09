#include<stdio.h>
int main()
{
int a,b,*x,*y,temp;
printf("the values of a and b are:");
scanf("%d%d",&a,&b);
printf("before swapping the no. are:%d %d",a,b);
x=&a;
y=&b;
temp=*x;
*x=*y;
*y=temp;
printf("after swapping the no. are:%d %d",a,b);
return 0;

}
