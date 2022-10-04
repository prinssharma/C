#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number between 1 and 3\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
              printf("The value is 1");
              break;
        case 2:
              printf("The value is 2");
              break;
        case 3:
              printf("The value is 3");
              break;
        default :
              printf("invalid number");
    }
    return 0;

}
