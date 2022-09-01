// Write a recursive function to print first N terms of Fibonacci series.

#include <stdio.h>

int Fibonacci(int);
int Fibonacci(int n)
{
    if(n == 1 || n == 2) return 1;
    return(Fibonacci(n - 1) + Fibonacci(n - 2));
}


int main()
{
    int num,i;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    for(i=1; i<=num; i++)
    {
        printf("%d\t",Fibonacci(i));
    }
    printf("\n\n");
    return 0;
}