#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a % 2 == 0 || a % 3 == 0)
        {
        printf("Number is divisible by 2 or 3\n");
        }
    else
        {
            printf("Number is not divisible by 2 or 3");
        }
    return 0;
}
