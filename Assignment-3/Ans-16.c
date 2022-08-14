/* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character. */

#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter a character : ");
    scanf("%c",&ch);
    if(ch >=97 && ch <=122) printf("Character is alphabet in lowercase");
    else if(ch >=65 && ch <=90) printf("Character is alphabet in uppercae");
    else if(ch >=48 && ch <=57) printf("Character is digit");
    else if(ch >=32 && ch <=47) printf("Character is special symbol");
    else printf("Other ASCII Character");
    return 0;
}
