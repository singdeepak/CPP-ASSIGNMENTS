// Write a recursive function to calculate factorial of a given number.

#include <stdio.h>

int Factorial(int);
int Factorial(int n)
{
    if(n == 0 || n == 1) return 1;
    else return Factorial(n-1) * n;
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nFactorial of %d is %d\n\n",num,Factorial(num));
    return 0;
}