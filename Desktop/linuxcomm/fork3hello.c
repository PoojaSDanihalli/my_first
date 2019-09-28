#include<stdio.h>
#include<sys/types.h>
int main()
{
	fork();
	fork();
	fork();
	printf("\nhello");
	return 0;
}
