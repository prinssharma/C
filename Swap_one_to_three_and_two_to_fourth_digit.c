#include<stdio.h>
int main()
{
    int n, a, b, swap;
    printf("Enter a four digit number\n");
    scanf("%d",&n);
    a = n / 100;
    b = n % 100;
    swap = b * 100 + a;
    printf("The swaped number = %d",swap);
    return 0;
}
