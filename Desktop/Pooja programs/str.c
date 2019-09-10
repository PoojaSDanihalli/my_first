#include<stdio.h>
int main()
{
char strcnpy(char *src,char *dest,size_t);
char src[10]="pooja";
char dest[10]="danihalli";
int i;
char *
           strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < 3 && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < 3; i++)
                   dest[i] = '\0';

               return dest;
		printf("%d",dest);
           }
}

