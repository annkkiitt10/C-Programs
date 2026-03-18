#include<stdio.h>
#include<string.h>

void main()
{
char a[50],b[50];
gets(a);
gets(b);

strcat(a,b);

printf("%s",a);
}