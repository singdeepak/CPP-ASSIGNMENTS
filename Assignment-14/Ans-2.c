/* Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user. */

#include <stdio.h>

int main()
{
    int A[10], k = 0, sum = 0;
    float avg;
    while(k<10)
    {
        printf("\nEnter %d Number : ",k+1);
        scanf("%d",&A[k]);
        sum=sum+A[k];
        k++;
    }

    avg = sum/10.0;
    printf("\n\nAverage = %0.2f\n\n",avg);

    return 0;
}