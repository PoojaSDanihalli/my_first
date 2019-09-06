#include<stdio.h>
int add(int a[3][3],int b[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}	

int main()
{
	int i,j,a[3][3],b[3][3];
	printf("enter the array values for a");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the array values for b");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&b[i][j]);
		}
	}
	printf("the 3*3 matrix for a\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d ",a[i][j]);
		}
			printf("\n");
	}
	printf("the 3*3 matrix for b\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d ",b[i][j]);
		}
			printf("\n");
	}
printf("the addition of 2 matrices is\n");
add(a,b);
return 0;
}
	

