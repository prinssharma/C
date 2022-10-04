#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the range of a and b\n");
    scanf("%d %d",&a,&b);
    i = a;
    while(i <= b)
    {
        if((i % 3 == 0) || (i % 5 == 0))
            printf("%4d",i);
        i++;
    }
    return 0;
}
