/* Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
 */

#include <stdio.h>

int main()
{
    int A[10], k = 0, min, p = 0;

    while (k < 10)
    {
        printf("\nEnter %d Number : ", k + 1);
        scanf("%d", &A[k]);
        k++;
    }

    min = A[0];

    while (p < 10)
    {
        if (min > A[p])
            min = A[p];
        p++;
    }

    printf("\n\nSmallest Number = %d\n\n", min);

    return 0;
}
