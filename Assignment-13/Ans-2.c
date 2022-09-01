// Write a recursive function to calculate sum of first N odd natural numbers.

#include <stdio.h>

int sum_odd(int);
int sum_odd(int n)
{
    if(n == 1) return 1;
    return (sum_odd(n-1) + 2*n-1);
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nSum of first %d odd natural numbers is %d\n\n",num,sum_odd(num));
    return 0;
}