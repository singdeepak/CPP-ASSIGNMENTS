/* Write a program in C to copy the elements of one array into another array.Take array values from the user. */

#include <stdio.h>

int main()
{
    int size, k;

    printf("\nEnter size of array : ");
    scanf("%d", &size);

    int Arr1[size], Arr2[size];

    printf("\nEnter %d elements for arr1\n\n", size);
    for (k = 0; k < size; k++)
        scanf("%d", &Arr1[k]);

    for (k = 0; k < size; k++)
    {
        Arr2[k] = Arr1[k];
    }

    printf("\n\nArray-1\n");
    for (k = 0; k < size; k++)
    {
        printf("%d\t", Arr1[k]);
    }

    printf("\n\nArray-2\n");
    for (k = 0; k < size; k++)
    {
        printf("%d\t", Arr2[k]);
    }
    printf("\n\n");
    return 0;
}