// Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>
#include <limits.h>

int main()
{
    int max1, max2, size, k;
    printf("\nEnter the size of array : ");
    scanf("%d", &size);
    int Array[size];

    printf("\nEnter %d Elements for Array\n", size);
    for (k = 0; k < size; k++)
        scanf("%d", &Array[k]);

    max1 = max2 = INT_MIN;
    for (k = 0; k < size; k++)
    {
        if (Array[k] > max1)
        {
            max2 = max1;
            max1 = Array[k];
        }
        else if (Array[k] > max2 && Array[k] < max1)
            max2 = Array[k];
    }
    printf("\nSecond largest = %d\n\n", max2);
    return 0;
}