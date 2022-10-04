#include<stdio.h>
int main()
{
    int digit, N, i,sum = 0;
    printf("Enter the digit and value of N\n");
    scanf("%d %d",&digit,&N);
    for(i = 1; i <= N ; i++)
    {
        sum = sum + digit * i;
    }
    printf("Sum of first N multiple of given number = %d",sum);
    return 0;
}
