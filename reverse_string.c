#include<stdio.h>
#include<string.h>

void main()
{
char str[50];
gets(str);
strrev(str);
printf("Reverse=%s",str);
}