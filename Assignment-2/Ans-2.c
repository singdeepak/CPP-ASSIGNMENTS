// Write a program to print a given number without its last digit.

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number\n");
    scanf("%d",&num);
    printf("\nThe number is : %d\n\n",num/10);
    return 0;
}