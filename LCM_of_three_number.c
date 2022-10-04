#include<stdio.h>
int main()
{
    int a, b, c, lcm, i;
    printf("Enter three number\n");
    scanf("%d %d %d",&a,&b,&c);
    lcm = a > b ? ((a > c) ? a : c) : ((b > c) ? b : c);
    i = lcm;
    for(i=lcm ; i<= a*b*c; i=i+(lcm))
    {
        if(lcm % a == 0 && lcm % b == 0 && lcm % c ==0)
            break;
        lcm = lcm + i;
    }
    printf("LCM of %d %d and %d = %d",a,b,c,lcm);
    return 0;
}
