/* Write a program to check whether a given alphabet is in uppercase or lowercase. */

#include <stdio.h>

int main()
{
    char c;
    printf("\nEnter any alphabet : ");
    scanf("%c",&c);
    if(c >= 65 && c<=90) printf("Alphabet is in Uppercase");
    else if(c >= 97 && c<=122) printf("Alphabet is in Lowercase");
    else printf("Invalid Character");
    return 0;
}