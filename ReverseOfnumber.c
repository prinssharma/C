#include<stdio.h>
int main()
{
    int n,a,r;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
    printf("Reverse of the number = %d",r);
    return 0;
}
