#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    if(18 <= age <= 115)
        printf("The person is adult");
    else if (age > 115)
        {
            printf("The person is adult\n");
            printf("But, the person is no more\n");
        }
    else
        printf("The person is not adult");
    return 0;
}



















