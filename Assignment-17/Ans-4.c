// Write a program to convert a given string into uppercase

#include <stdio.h>

int main()
{
    char s[50];
    int k;

    printf("\nEnter string : ");
    fgets(s, 50, stdin);

    for(k=0; s[k]; k++)
    {
        if(s[k]>=97 && s[k]<=122)
            s[k] = s[k] - 32;
    }
    printf("\n");
    printf("%s",s);
    printf("\n\n");
    return 0;
}
