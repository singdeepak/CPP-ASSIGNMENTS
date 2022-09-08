/* Write a program to sort elements of an array of size 10. Take array values from the user. */

#include <stdio.h>

int main()
{
    int i, j, temp;
    int A[10];

    printf("\n\nEnter 10 elemet for array \n\n");
    for(i=0; i<10; i++)
        scanf("%d",&A[i]);

    printf("\n\nBefore sorting : ");
    for(j=0; j<10; j++)
        printf("%d\t",A[j]);


    for(i=0; i<9; i++)
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

    printf("\n\nAfter Sorting : ");
    for(i=0; i<10; i++)
        printf("%d\t",A[i]);
    printf("\n\n");
    return 0;
}