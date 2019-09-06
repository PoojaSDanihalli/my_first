#include<stdio.h>
int main()
{
int c;
printf("who is the captain of the indian cricket team?");
printf("0.Dhoni\n 1.Virat\n 2.Yuvraaj");
printf("enter the no.");
scanf("%d",&c);
switch(c)
{
	case 0:printf("dhoni is the captain");
		break;
	case 1:printf("virat is not the captain");
		break;
	case 2:printf("yuvraaj is not the captain");
		break;
	default:printf("dhoni is the captain");
		break;
}
return 0;
}
