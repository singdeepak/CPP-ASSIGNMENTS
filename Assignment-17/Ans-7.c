/* Write a program in C to count the total number of alphabets, digits and special
characters in a string. */

#include <stdio.h>

int main()
{
    char str[50];
    int k;
    int alpha=0, digit=0, special=0;
    printf("\nEnter a string : ");
    fgets(str, 50, stdin);
   
    for(k=0; str[k]; k++)
    {
        if((str[k]>='a' && str[k]<='z') || (str[k]>='A' && str[k]<='Z')) alpha++;
        else if(str[k]>='0' && str[k]<='9') digit++;
        else special++;
    }

    printf("\nAlphabet = %d",alpha);
    printf("\nDigit = %d",digit);
    printf("\nSpecial Character = %d\n\n",special);
    return 0;
}