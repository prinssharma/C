#include<stdio.h>
void main()
{
    int i, j, v = 1;
    for(i=1; i<=4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%4d",v);
            v++;
        }
        printf("\n");
    }
}
