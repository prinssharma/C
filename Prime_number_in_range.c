#include<stdio.h>
int main()
{
    int a, b, i, prime=2, count;
    printf("Enter the range of a and b for prime number\n");
    scanf("%d %d",&a,&b);
    printf("Prime number between %d and %d are ",a,b);
    for(i = a; i <= b; i++)
    {
        prime = 2;
        for(count = 2; count <= i/2; count++)
        {
            if(i % count == 0)
            {
                prime = 0;
                break;
            }

        }
        if(prime != 0)
            {
                printf("%4d",i);
            }
    }
    return 0;
}
