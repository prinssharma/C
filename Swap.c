#include<stdio.h>
int main()
{
    int n, s=0, r;
    printf("Enter the four digit number\n");
    scanf("%d",&n);
    while(n>0)
    {
    r = n % 10;
    s = (s * 10) + ((r + 8) % 10);
    n = n / 10;
    }
    printf("The encrypted number = %d",s);
    return 0;
}
