#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three no. a  b  c\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        {
            printf("a is big\n");
        }
        else
        {
            printf("c is big\n");
        }
    }
    else
    {
        if(b > c)
        {
            printf("b is big\n");
        }
        else
        {
            printf("c is big\n");
        }
    }
}
