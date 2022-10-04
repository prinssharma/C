#include<stdio.h>
int main()
{
    int a, b, i;
    printf("Enter the Range of a and b for odd number\n");
    scanf("%d %d",&a,&b);
    i = a;
    while(i <= b)
       {
        if(i % 2 != 0)
            printf("%5d",i);
            i++;
       }
    return 0;
}

