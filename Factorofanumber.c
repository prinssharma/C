#include<stdio.h>
int main()
{
    int n,f = 1, i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            ++f;
        }
    }
    printf("Factor count = %d",f);
    return 0;
}
