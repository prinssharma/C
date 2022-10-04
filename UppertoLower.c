#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character in upper case\n");
    scanf("%c",&ch);
    ch = ch + 32;
    printf("character in lower case = %c",ch);
    return 0;
}
