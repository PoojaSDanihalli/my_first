#include<stdio.h>
int main()
{

int i,j,a[5][5];
printf("enter the elements of a matrix");
for(i=0;i<4;i++)
for(j=0;j<4;j++)
scanf("%d",&a[i][j]);
printf("the diagonals are\n");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{	
		if((i==j)||(i+j==3))
			printf("%d",a[i][j]);
		else
			printf(" ");


	}
	printf("\n");
}	
return 0;
}
	

	

