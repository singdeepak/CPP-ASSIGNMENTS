// Ans-5. WAP to calculate the length of String using printf function.

#include <stdio.h>

void main()
{
    char name[100];
    int k,count=0;
    printf("\nEnter your name\n");
    gets(name);
    for(k=0; name[k]!='\0'; k++)
        count++;
    printf("Length of string is %d",count);
}
