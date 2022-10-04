#include<stdio.h>
int main()
{
    int i, sum = 0;
    for(i = 1; i <= 10; i++)
    {

        if(sum == 6)
        {
          break;
        }
         sum += i;
    }
    printf("Total sum = %d",sum);
}
