#include<stdio.h>
int fact(int n)
{
    if (n==0)
        return 1;
    else
        return n * fact(n-1);
}

int combi(int n , int r)
{
    return (fact(n)/(fact(n-r)*fact(r)));

}

int main()
{
    int r,n,c;
    printf("Enter the value of n and r for combination\n");
    scanf("%d %d",&n,&r);
    c = combi(n,r);
    printf("Combination = %d",c);
}
