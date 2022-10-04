#include<stdio.h>
void main()
{
    int i,j,sum=0;
    for(i=1;i<3;i++);
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",sum);
            sum +=i;

        }
        printf("\n");
    }
}

