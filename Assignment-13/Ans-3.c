// Write a recursive function to calculate sum of first N even natural numbers.

#include <stdio.h>

int sum_even(int);
int sum_even(int n)
{
    if(n > 0) return sum_even(n-1) + 2*n;
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nSum of first %d even natural numbers is %d\n\n",num,sum_even(num));
    return 0;
}