#include<stdio.h>
int main()
{
    int a, b, c, gcd, i;
    printf("Enter three number\n");
    scanf("%d %d %d",&a,&b,&c);
    gcd = a < b ? ((a < c) ? a : c) : ((b < c) ? b : c);
    i = gcd;
    for(i ; i >= 1; i--)
    {
        if(a % i == 0 && b % i ==0 && c % i ==0)
            break;
    }
    printf("GCD of %d %d and %d = %d",a,b,c,i);
    return 0;
}
