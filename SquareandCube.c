#include<stdio.h>
int main()
{
    float a,s,c;
    printf("Enter the number\n");
    scanf("%f",&a);
    s = a * a;
    c = a * a * a;
    printf("Square of number = %f\n",s);
    printf("Cube of number = %f\n",c);
    return 0;
}
