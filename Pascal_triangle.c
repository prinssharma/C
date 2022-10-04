#include<stdio.h>
void main()
{
    int n, s, i, j, k;
    printf("Enter the rows number\n");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        for(k = 0; k < n-i; k++)
        {
            printf("  ");
        }
        s = 1;
        for(j = 0; j <= i; j++)
        {
            printf("%5d",s);
            s = s * (i-j)/(j+1);
        }
        printf("\n");
    }
}
