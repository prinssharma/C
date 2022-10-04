#include<stdio.h>
int main()
{
    int a = 0, b = 1, c, i, n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("first %d terms of fibonacci series is :",n);
    for(i = 0; i < n; i++)
    {
        if(i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%5d",c);
    }
}
