#include<stdio.h>
#include<string.h>
int main()
{
char source[]="pooja";
char destination[10];
char *p;
p=strstr("I am pooja","am");
printf(p);
//strcpy(destination,source);
strncpy(destination,source,3);
//printf("source %s\n",source);
printf("destination %s\n",destination);
return 0;
}
