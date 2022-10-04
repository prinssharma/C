#include<stdio.h>
int main()
{
    int n, p, r, sum = 0;
    printf("Enter the number\n");
    scanf("%d",&n);
    p = n;
    while(p != 0)
    {
        r = p % 10;
        sum = sum + (r * r * r);
        p = p / 10;
    }
    if(sum == n)
        {
            printf("%d is armstrong number",n);
        }
    else
        {
            printf("%d is not an armstrong number",n);
        }
    return 0;
}
