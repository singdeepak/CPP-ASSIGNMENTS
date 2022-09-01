// Write a recursive function to calculate sum of squares of first n natural numbers.

#include <stdio.h>

int sum_squares(int);
int sum_squares(int n)
{
    if(n > 0)
    {
        return sum_squares(n-1) + n*n;
    }
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nSum of first %d natural numbers squares is %d\n\n",num,sum_squares(num));
    return 0;
}