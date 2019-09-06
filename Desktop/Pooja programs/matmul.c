#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,k,sum=0;
	int first[2][2],second[2][2],multiply[2][2];
	printf("enter the no of rows and columns in first");
	scanf("%d %d",&a,&b);
	printf("enter the elements of first matrix");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	printf("enter the no of rows and columns in second");
	scanf("%d %d",&c,&d);
	if(b!=c)
	{
		printf("matrix multiplicaion is not possible");
	}
	else
	{
		printf("enter the elements of second matrix");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				scanf("%d",&second[i][j]);
			}
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				for(k=0;k<c;k++)
				{
					sum=sum+first[i][k]*second[k][j];
				}
				multiply[i][j]=sum;
				sum=0;
			}
		}
		printf("the product of matrices are:\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("%d\t",multiply[i][j]);
			}
			printf("\n");
		}
	}
return 0;
		
}

