#include<stdio.h>
int main()
{
    int a, b, count = 1, i;
    printf("Enter the range of a and b\n");
    scanf("%d",&a);
    for(i = a; i <= b ; i++)
    {
       if(a % i == 0)
       {
           count++;
       }
    }
       if(count == 2)
            printf("%d is a prime number",a);
       else
        printf("%d is not a prime number",a);

    return 0;
}

