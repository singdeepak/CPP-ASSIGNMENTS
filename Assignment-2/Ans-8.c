/* Write a program to check whether the given number is even or odd using a bitwise
operator. */


#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }
}