#include<stdio.h>
int main()
{
    int a, b, r;
    float q;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    r = a % b;
    q = a / b;
    printf("Quotient = %f   , Reminder = %d",q,r);
    return 0;
}
