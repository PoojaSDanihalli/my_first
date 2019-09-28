#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int cpid=fork();
	if(cpid==0)
		printf("Hello I am a Child\n");
	else
		printf("Hello I am a parent\n");
	return 0;
}
