#include<stdio.h>
int fact(int a)
{
if(a>1)
{
return (a)*fact(a-1);
}
else
return 1;
}
int main()
{
int res,n;
printf("enter the no:");
scanf("%d",&n);
res=fact(n);
printf("the factorial is %d\n",res);
return 0;
}

