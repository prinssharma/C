#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("The Character is vowel");
            break;
        case 'e':
        case 'E':
            printf("The character is vowel");
            break;
        case 'i':
        case 'I':
            printf("The character is vowel");
            break;
        case 'o':
        case 'O':
            printf("The character is vowel");
            break;
        case 'u':
        case 'U':
            printf("The character is vowel");
            break;
        default :
            printf("The character is consonent");
    }
    return 0;
}
