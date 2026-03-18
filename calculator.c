#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter operator(+ - * /)");
    scanf(" %c",&op);
    printf("enter second number");
    scanf("%d",&b);
    if (op == '+')
    printf("result =%d",a+b);
    else if(op == '-')
    printf("result =%d",a-b);
    else if(op == '*')
    printf("reslut =%d",a*b);
    else if(op == '/')
    printf("result =%d",a/b);
    else 
    printf("invalid operator");
    return 0;
}
