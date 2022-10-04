#include<stdio.h>
int main()
{
    int i, j;
    printf("a)\n");
    for(i=1; i< 5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" 1 ");
        }
        printf("\n");
    }
    printf("\n");
    printf("b)\n");
     for(i=1; i<= 5; i++)
    {
        for(j=1; j<=i-1; j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("c)\n");
     for(i=1; i<= 5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }

}
