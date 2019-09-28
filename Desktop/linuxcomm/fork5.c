#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"Incorrect no of argument.p1 pass one integer\n");
		return 1;
	}
	pid_t cpid;
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++){
		fork();
	}
	//fflush(0);
	fprintf(stderr,"PID=%ld,PPID=%ld\n",(long)getpid(),(long)getppid());
	while(1);
	return 0;
	
}
