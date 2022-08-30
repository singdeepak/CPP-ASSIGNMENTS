/* Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user. */

#include <stdio.h>

int main()
{
    int a, b, length, temp, range;

    printf("\nEnter array range : ");
    scanf("%d", &range);
    int Arr[range];

    printf("\nEnter %d elements for array : \n", range);

    for (a = 0; a < range; a++)
    {
        scanf("%d", &Arr[a]);
    }

    for (length = 0; length < range; length++);
    
    for(b = 0; b < length/2; b++)
    {
        temp = Arr[b];
        Arr[b] = Arr[length - 1 - b];
        Arr[length - 1 - b] = temp;
    }

    printf("\n\n");
    for(b = 0; b < length; b++)
    {
        printf("%d\t",Arr[b]);
    }
    printf("\n\n");
    
    return 0;
}
