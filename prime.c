#include<stdio.h>
int main()
{
    int n, i, r = 1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i = 2 ; i <= n/2 ; i++);
    {
        if(n % i == 0)
        {
            r++;
        }
    }
    if (r == 2)
        printf("%d is a Prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
