#include<stdio.h>
rev(char *string)
{
    if(*string !='\0')
    {
        rev(string+1);
        printf("%c",*string);
    }
}
void main()
{
    char a[20];

    printf("Enter a string\n");
    gets(a);
    rev(a);
}
