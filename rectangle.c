#include<stdio.h>
int main()
{
    float l, b, area;
    printf("enter length\n");
    scanf("%f",&l);
    printf("enter breadth\n");
    scanf("%f",&b);
    area = l * b;
    printf("Area of rectangle = %f",area);
    return 0;
}
