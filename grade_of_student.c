#include<stdio.h>
void main()
{
int m;
scanf("%d",&m);

if(m>=90)
printf("Grade A");
else if(m>=75)
printf("Grade B");
else if(m>=50)
printf("Grade C");
else
printf("Fail");
}