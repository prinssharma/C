#include<stdio.h>
int main()
{
    int n;
    float x, y;
    printf("Enter the value of n  and  x\n");
    scanf("%d %f",&n,&x);
    switch(n)
    {
    case 1:
        y = 1 + (x * x);
        break;
    case 2:
        y = 1 + (x / n);
        break;
    case 3:
        y = 1 + (2 * x);
        break;
    default :
        y = 1 + (n * x);
    }
    printf("Y = %f",y);
    return 0;
}
