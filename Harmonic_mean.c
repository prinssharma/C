#include<stdio.h>
void main()
{
    int n;
    float sum = 0, i, n1, hm;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        n1 = 1/i;
        sum = sum + n1;
    }
    hm = n/sum;
    printf("The harmonic mean = %f",hm);
}
