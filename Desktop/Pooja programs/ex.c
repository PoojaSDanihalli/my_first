#include<stdio.h>
void A(int n)
{
	if(n>0)
	{
		A(n-1);
		printf("%d",n);
		A(n-1);
	}
	
}
int main()
{
	A(3);
}
