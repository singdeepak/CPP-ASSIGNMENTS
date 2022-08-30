/* Write a program to find the greatest number stored in an array of size 10. Take array values from the user. */

#include <stdio.h>

int main()
{
    int A[10], k = 0, max, p = 0;

    while (k < 10)
    {
        printf("\nEnter %d Number : ", k + 1);
        scanf("%d", &A[k]);
        k++;
    }

    max = A[0];

    while (p < 10)
    {
        if (max < A[p])
            max = A[p];
        p++;
    }

    printf("\n\nLargest Number = %d\n\n", max);

    return 0;
}
