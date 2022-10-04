#include<stdio.h>
int main()
{
    float a, b, c, avg;
    printf("Enter three number\n");
    scanf("%f %f %f",&a,&b,&c);
    avg = (a + b + c)/3;
    printf("Average of three no.=%f",avg);
    return 0;
}
