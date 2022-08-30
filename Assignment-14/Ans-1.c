/* Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user. */

#include <stdio.h>

int main()
{
    int A[10], k = 0, sum = 0;

    while (k < 10)
    {
        printf("\nEnter %d number : ", k+1);
        scanf("%d", &A[k]);
        sum = sum + A[k];
        k++;
    }

    printf("\n\nTotal Array Sum is : %d\n\n", sum);

    return 0;
}
