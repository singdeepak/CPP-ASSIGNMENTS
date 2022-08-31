// Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>

void odd(int);
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    odd(num);
    return 0;
}

void odd(int n)
{
    int a = 1;
    while (a <= n)
    {
        if (a % 2 != 0)
            printf("%d\t", a);
        a++;
    }
}