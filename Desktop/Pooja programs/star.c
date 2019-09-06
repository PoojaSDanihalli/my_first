#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
			printf("  ");
			for(k=i;k<=4;k++)
				printf("*");
	printf("\n");
	}
	return 0;
}
