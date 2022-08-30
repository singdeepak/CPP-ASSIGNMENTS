/* Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user. */

#include <stdio.h>

int main()
{
    int A[10], k = 0, p = 0, even = 0, odd = 0;

    while (k < 10)
    {
        printf("\nEnter %d Number : ", k + 1);
        scanf("%d", &A[k]);
        if (A[k] % 2)
            odd = odd + A[k];
        else
            even = even + A[k];
        k++;
    }

    printf("\nEven numbers sum = %d\n", even);
    printf("Odd numbers sum = %d\n\n", odd);
    
    return 0;
}
