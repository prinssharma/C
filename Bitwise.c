#include<stdio.h>
int main()
{
    int a, b, result;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    result = a & b;
    printf("%d",result);
    return 0;
}
