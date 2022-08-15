// Write a program to calculate sum of squares of first N natural numbers.

#include <stdio.h>

int main()
{
    int num,sum=0,k;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(k=1; k<=num; k++)
        sum = sum + k*k;
    printf("Sum of first %d natural number square is %d",num,sum);
    return 0;
}
