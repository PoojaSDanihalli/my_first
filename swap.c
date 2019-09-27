#include<stdio.h>
int main()
{
int a,b;
printf("enter 2 digits");
scanf("%d %d",&a,&b);
a^=b^=a^=b;
printf("the digits after swapping are: %d %d",a,b);
return 0;
}

