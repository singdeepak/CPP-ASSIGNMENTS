// Write a recursive function to calculate sum of first N natural numbers.

#include <stdio.h>

int sum_natural(int);
int sum_natural(int n)
{
    if(n > 0)
    {
        return sum_natural(n-1) + n;
    }
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nSum of first %d numbers is %d\n\n",num,sum_natural(num));
    return 0;
}