#include<stdio.h>
int main()
{
char x;
printf("Enter any letter");
scanf("%c",&x);
if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='i'||x=='e'||x=='o'||x=='u')
{
printf("the letter %c is vowel",x);
}
else
printf("the letter %c is a consonant",x);
return 0;
}

