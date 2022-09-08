// Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>

int main()
{
    int A[10];
    int i, j, temp, large, slarge;

    printf("\nEnter 10 elements for array\n");
    for(i=0; i<10; i++)
        scanf("%d",&A[i]);


    large = A[0];

    for(i=1; i<10; i++)
    {
        if(A[i] > large)
        {
            slarge = large;
            large = A[i];
        }
        else if(A[i] > slarge)
            slarge = A[i];
    }
    printf("\n\nLargest = %d",large);
    printf("\n\nSecond Largest = %d\n\n",slarge);


    /* for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("\nAfter Sorting : ");
    for(i=0; i<10; i++) printf("%d\t",A[i]);
    printf("\n\nSecond Largest Number is : %d\n\n", A[10-2]); */


    return 0;
}