#include<stdio.h>
int main()
{
    int n,r=0,a;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
    a = n %10;
    r = r + a;
    n = n / 10;
    }
    printf("result = %d\n",r);
    if (r % 9 ==0)
        printf("number is divisible by 9",n);
    else
        printf("number is not divisible by 9");
}
