#include<stdio.h>
int main()
{
    int n, a, b, c, d, p, q, r, s, newn;
    printf("Enter the four digit number\n");
    scanf("%d",&n);
    a = n/1000;
    p = (a +8) % 10;
    b = n % 1000;
    q = b / 100;
    q = (q +8) % 10;
    c = n % 100;
    r = c / 10;
    r = (r + 8) % 10;
    d = n % 1000;
    s = (d + 8) % 10;
     newn = (p*1000)+(q*100)+(r*10)+s;
     while(newn>0)
     {
         a = newn % 10;
         r = r * 10 + a;
         newn = newn / 10;
     }
     printf("The encrypted number = %d ",r);


}
