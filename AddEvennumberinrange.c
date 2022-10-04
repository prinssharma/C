#include<stdio.h>
int main()
{
    int a, b, i, sum = 0;
    printf("Enter the range of a and b\n");
    scanf("%d %d",&a,&b);
    if(a % 2 != 0)
    {
        a++;
    }
    for(i = a; i <= b; i += 2)
    {
        sum = sum + i;
    }
    printf("Sum of all even number between %d to %d = %d", a ,b,sum);
    return 0;
}
