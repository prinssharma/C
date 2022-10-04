#include<stdio.h>
void main()
{
    int i, j, v = 10;
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j < i-1; j++)
        {
            printf("  ");
        }
    {
    for(j = 0; j < 4-i; j++)
    {
        printf("%4d",v);
        v--;
    }
    printf("\n");
    }
    }
}
