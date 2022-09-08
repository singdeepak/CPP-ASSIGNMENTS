// Write a program in C to copy one string to another string.

#include <stdio.h>

int main()
{
    char p[50], q[50];
    int k;
    printf("\nEnter a string : ");
    fgets(p, 50, stdin);
    for(k=0; p[k]; k++)
        q[k] = p[k];
    q[k] = '\0';
    
    printf("\nCopied string is : ");
    printf("%s",q);
    printf("\n\n");
    return 0;
}