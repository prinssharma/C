#include<stdio.h>
int main()
{
    int i, j, n=10,sum = 0,value = 0;
    printf("The sum for continue = ");
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
        if(sum == 6)
        continue;
        sum;
    }
    printf("%d\n",sum);
    for(j=1; j<=n; j++)
    {
        value = value + j;
        if(value == 6)
        break;
    }
    printf("The sum for break = %d",value);
}
