// Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>

int count(int);
int count(int n)
{
    if(n > 0)
        return count(n/10) + 1;
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    printf("Total digits in %d is %d",num,count(num));
    printf("\n\n");
    return 0;
}