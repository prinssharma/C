#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2,x3;
    printf("Enter the value of a, b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    d = b * b -(4 * a * c);
    if(d < 0)
    {
        printf("Roots are imaginary");
    }
    else if(d > 0)
    {
        x1 = (-b + sqrt(d))/(2 * a);
        x2 = (-b - sqrt(d))/(2 * a);
        printf("The roots are real and unequal\n");
        printf("The roots are %f    and %f",x1,x2);
    }
    else
    {
        x3 = -b /(2 * a);
        printf("The roots are real and equal\n");
        printf("x = %f",x3);
    }
    return 0;
}
