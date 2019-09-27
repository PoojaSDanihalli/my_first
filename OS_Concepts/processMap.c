/*
* Author:Pooja S Danihalli
* Date:19 Sep 2019
* Description:Understanding process address space
* */


#include<stdio.h>

//Global Variable Declaration

int gvar_1;
int gvar_2=10;

static int sgvar_1;
static int sgvar_2=20;

//Entry Point
int main(int argc,char* argv[])
{	
	int loc=10;
	printf("main:%p\n",main);		//function address
	printf("gvar_2:%p\n",&gvar_2);		//initialized global variable
	printf("sgvar_2:%p\n",&sgvar_2);	//initialized global static var
	printf("gvar_1:%p\n",&gvar_1);		//uninitialized global var
	printf("loc:%p\n",&loc);	//uninitialized global static var
	return 0;	
	
}
