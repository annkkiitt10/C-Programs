#include<stdio.h>
int main()
{
    float radious,area;
    printf("enter the radious of circle");
    scanf("%f",& radious);
    area = 3.14*radious*radious;
    printf("area of circle =%2f",area);
    return 0;
}