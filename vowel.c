#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'a':
            printf("%c is a vowel\n",ch);
            break;
        case 'E':
        case 'e':
            printf("%c is a vowel\n",ch);
            break;
        case 'I':
        case 'i':
            printf("%c is a vowel\n",ch);
            break;
        case 'O':
        case 'o':
            printf("%c is a vowel\n",ch);
            break;
        case 'U':
        case 'u':
            printf("%c is a vowel\n",ch);
            break;
        default:
            printf("%c is  a consonant\n ",ch);
    }
}
