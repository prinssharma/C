#include<stdio.h>
int main()
{
    int x,n;
    float y;
    printf("Enter the of n and x\n");
    scanf("%d %d",&n,&x);
    if (n == 1)
        y = 1 + (x *x);
    else if (n == 2)
        y = 1 + (x / n);
    else if (n ==3)
        y = 1 + (2 * x);
    else
        y = 1 + (n * x);
    printf("Y = %f",y);
    return 0;
}
