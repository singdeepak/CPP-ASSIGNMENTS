// Write a program to find second smallest in an array.Take array values from the user.

#include <stdio.h>

int main()
{
    int A[10], i, small, Ssmall;

    printf("\nEnter 10 elements for array\n");
    for(i=0; i<10; i++)
        scanf("%d",&A[i]);

    small = A[0];
    for(i=1; i<10; i++)
    {
        if(A[i] < small)
        {
            Ssmall = small;
            small = A[i];
        }
        else if(A[i] < Ssmall)
            Ssmall = A[i];
    }

    printf("\nSallest element : %d",small);
    printf("\nSecond smallest : %d\n\n",Ssmall);
    
    return 0;
}