// Write a recursive function to calculate sum of digits of a given number.

#include <stdio.h>

int sum_digit(int);
int sum_digit(int n)
{
    if(n > 0)
    {
        return sum_digit(n/10) + n%10;
    }
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nSum of digits of %d is %d\n\n",num,sum_digit(num));
    return 0;
}