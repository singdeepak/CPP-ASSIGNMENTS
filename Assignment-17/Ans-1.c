// Write a program to calculate the length of the string. (without using built-in method)

#include <stdio.h>

int main()
{
    char str[20];
    int k;

    printf("\nEnter you name : ");
    fgets(str, 20, stdin);

    for(k=0; str[k]; k++);
    printf("\nLength of string is %d\n\n",k-1);

    return 0;
}