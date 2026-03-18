#include<stdio.h>
void main()
{
float p,r,t,si;
printf("Enter P R T: ");
scanf("%f%f%f",&p,&r,&t);

si=(p*r*t)/100;
printf("Simple Interest=%f",si);
}