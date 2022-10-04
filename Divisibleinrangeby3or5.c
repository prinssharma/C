#include<stdio.h>
int main()
{
    int a, b, i=1;
    printf("Enter the range of a and b\n");
    scanf("%d %d",&a,&b);
    do
    {
        if((i % 3 == 0) || (i % 5 == 0))
            printf("%4d",i);
            i++;
    }
    while(i <= b);
    return 0;
}
