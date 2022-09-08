// Write a program to count vowels in a given string

#include <stdio.h>

int main()
{
    char s[50];
    int k, count = 0;

    printf("\nEnter string : ");
    fgets(s, 50, stdin);

    for(k = 0; k <= s[k]; k++)
        if(s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u') count++; 
        printf("\nTotal vowels in string are %d\n\n",count);
    return 0;
}