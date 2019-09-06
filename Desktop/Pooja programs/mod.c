#include<stdio.h>

int findmod(int a,int b)
{
	return a%b;
}
int main()
{
int res;
res=findmod(6,5);
printf("the modulus is %d\n",res);
return 0;
}
 
