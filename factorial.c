#include<stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d = %d",n,f);
}
int fact(int n)
{
    int v=1, i;
    for(i=1; i<=n; i++)
    {
     v = v * i;
    }
    return v;
}
