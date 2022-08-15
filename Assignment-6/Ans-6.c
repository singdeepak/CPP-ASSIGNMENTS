// Write a program to calculate factorial of a number.

#include <stdio.h>

int main()
{
    int fact=1,n,a;
    printf("\nEnter a number : ");
    scanf("%d",&n);

    for(a=n; a>0; a--)
        fact = fact * a;
    printf("Factorial of %d is %d",n,fact);
    return 0;
}