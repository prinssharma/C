#include<stdio.h>
int main()
{
 int n, r, x, sum = 0;
 printf("Enter the number\n");
 scanf("%d",&n);
 x = n;
 do
 {
  r = n % 10;
  sum = (sum * 10) + r;
  n = n / 10;
 }
 while(n > 0);
 if (x == sum)
 {
   printf("%d is a palindrome number",x);
 }
 else
 {
   printf("%d is not palindrome number",x);
 }
}







