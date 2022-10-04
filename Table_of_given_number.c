#include<stdio.h>
int main()
{
   int n, i, a;
   printf("Enter a number for table\n");
   scanf("%d",&n);
   printf("\n");
   printf("Table of %d is\n",n);
   for(i=1; i<11; i++)
   {
    a = n*i;
    printf("%d\n",a);
   }
   printf("Done");
    printf("\n");
}
