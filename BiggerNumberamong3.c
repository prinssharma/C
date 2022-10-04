#include<stdio.h>
int main()
{
    float a,b,c,bigger;
    printf("Enter three number\n");
    scanf("%f %f %f",&a,&b,&c);
    bigger = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("The greatest number = %.2f",bigger);
    return 0;
}
