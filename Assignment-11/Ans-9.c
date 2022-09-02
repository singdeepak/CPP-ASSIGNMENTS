// Write a program in C to find the square of any number using the function.


#include <stdio.h>

int Square(int);
int Square(int n)
{
    return n*n;
}

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    printf("Square of %d is %d",num,Square(num));
    printf("\n\n");
    return 0;
}