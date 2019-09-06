#include<stdio.h>
int main()
{
char name[10];
int x;
printf("enter your name:");
scanf("%s",name);
printf("enter coolness:");
scanf("%d",&x);
if(x>7)
{
printf("Hey %s,You're cool",name);
}
else
printf("%s Better luck next time",name);
return 0;
}


