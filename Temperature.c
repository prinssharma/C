#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in degree celsius\n");
    scanf("%f",&c);
    f = 1.8 * c + 32;
    printf("Temperature in fahrenheit = %f",f);
    return 0;
}
