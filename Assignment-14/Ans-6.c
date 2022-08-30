/* Write a program to sort elements of an array of size 10. Take array values from the user. */

#include <stdio.h>

int main()
{
    int A[10], k, p = 0, temp;
    while (p < 10)
    {
        printf("\nEnter %d Number : ", p + 1);
        scanf("%d", &A[p]);
        p++;
    }


    printf("\n\n");
    for(k=0; k<10; k++)
    {
        temp = A[k];
        if(temp > A[k+1])
            temp = A[k+1];
        A[k] = temp;
    }

    for(k=0; k<10; k++)
    {
        printf("%d\t",A[k]);
    }
    printf("\n\n");
    
    return 0;
}
