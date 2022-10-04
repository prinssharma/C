#include<stdio.h>
int main()
{
    float r,pi,a,p;
    printf("Enter area of circle\n");
    scanf("%f",&a);
    pi = 3.14;
    r = sqrt(a / pi);
    p = 2 * pi * r;
    printf("Radius =%f    Perimeter of circle = %f",r,p);
    return 0;
}
