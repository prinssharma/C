#include<stdio.h>
int main()
{
    int age;
    printf("Enter Age\n");
    scanf("%d",&age);
    if(age >= 18)
        {
          printf("Person is adult\n");
        }
    else
        {
          printf("person is not adult\n");
        }
    return 0;
}
