#include<stdio.h>
void main()
{
    int n,i;
    float sum = 0, a;
    printf("Enter the value of n\n");
    scanf("%d",n);
    i = 1;
    do
    {
        a = 1/i;
        sum = sum + a;
        i++;
    }
    while(i <= n);
    printf("The sum of the series = %f",sum);

}
