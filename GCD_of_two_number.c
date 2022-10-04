#include<stdio.h>
int main()
{
    int a, b, gcd, i;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    gcd = a < b ? a : b;
    i = gcd;
    for(i ; i >= 1; i--)
    {
        if(a % i == 0 && b % i ==0)
            break;
    }
    printf("GCD of %d and %d = %d",a,b,i);
    return 0;
}
