#include<stdio.h>
int main()
{
    int n,swap,a,b,c,d;
    printf("Enter a four digit number\n");
    scanf("%d",&n);
    a = n / 1000;
    d = n % 10;
    n = n % 1000;
    b = n / 100;
    n = n / 10;
    c = n % 10;
    swap = c * 1000 + d * 100 + a * 10 + b;
    printf("The swap number =  %d",swap);
    return 0;
}
