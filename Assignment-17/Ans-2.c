// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
    char s[50], ch;
    int k, count = 0;

    printf("\nEnter string : ");
    fgets(s, 50, stdin);
    printf("\nEnter character : ");
    scanf("%c",&ch);

    for(k=0; s[k]; k++)
    {
        if(ch == s[k]) count++;
    }
    printf("\nTotal occurance of %c is %d\n\n",ch,count);

    return 0;
}