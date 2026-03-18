#include<stdio.h>
void main()
{
int a=0,b=1,c=1,d,i,n;

scanf("%d",&n);

printf("%d %d %d ",a,b,c);

for(i=4;i<=n;i++)
{
d=a+b+c;
printf("%d ",d);
a=b;
b=c;
c=d;
}
}