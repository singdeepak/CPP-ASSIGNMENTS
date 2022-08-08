// Write a program to swap values of two int variables without using a third variable.


#include <stdio.h>

int main()
{
    int a,b;
    printf("\nEnter a number for A : ");
    scanf("%d",&a);
    printf("\nEnter a number for B : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nA = %d\nB = %d\n\n",a,b);
    return 0;
}