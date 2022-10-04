#include<stdio.h>
void main()
{
    int n, i, f = 1;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
    for(i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf("Factorial of given number = %d", f);
}
