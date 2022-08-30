// Write a program to find second smallest in an array.Take array values from the user.

#include <stdio.h>
#include <limits.h>

int main()
{
    int min1, min2, size, k;
    printf("\nEnter the size of array : ");
    scanf("%d", &size);
    int Array[size];

    printf("\nEnter %d Elements for Array\n", size);
    for (k = 0; k < size; k++)
        scanf("%d", &Array[k]);

    min1 = min2 = INT_MAX;

    for (k = 0; k < size; k++)
    {
        if (Array[k] < min1)
        {
            min2 = min1;
            min1 = Array[k];
        }
        else if (Array[k] < min2 && Array[k] > min1)
            min2 = Array[k];
    }
    printf("\nSecond Smallest = %d\n\n", min2);
    return 0;
}