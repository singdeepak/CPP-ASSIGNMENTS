//  Write a program to calculate sum of first N odd natural numbers.


#include <stdio.h>

int main()
{
    int num,sum=0,k;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(k=1; k<=num; k++)
        if(k%2!=0) sum = sum + k;
    printf("Sum of first %d odd number is %d",num,sum);
    return 0;
}