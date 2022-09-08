// Write a program to reverse a string.

#include <stdio.h>

int main()
{
    char str[50],ch;
    int k, i = 0;
    printf("\nEnter a string : ");
    fgets(str, 50, stdin);
    for(k=0; str[k]; k++);
    while(i < k/2)
    {
        ch = str[i];
        str[i]=str[k-1-i];
        str[k-1-i] = ch;
        i++;
    }
    printf("%s",str);
    printf("\n\n");
    return 0;
}