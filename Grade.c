#include<stdio.h>
int main()
{
    int m, ms;
    printf("Enter marks\n");
    scanf("%d",&m);
    ms = m / 10;
    switch(ms)
    {
    case 10:
        printf("Grade : O");
        break;
    case 9:
        printf("Grade : O");
        break;
    case 8:
        printf("Grade : E");
        break;
    case 7:
        printf("Grade : A");
        break;
    case 6:
        printf("Grade : B");
        break;
    case 5:
        printf("Grade : c");
        break;
    case 4:
        printf("Grade : D");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Fail");
    }
    return 0;
}
