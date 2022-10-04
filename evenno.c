#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the range\n");
    scanf("%d %d",&i,&n);
    for(i = 2; i <= n; i++)
    {
        if(i % 2 == 0)
            printf("%5d",i);
    }
    return 0;
}
