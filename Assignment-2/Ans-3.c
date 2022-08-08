// Write a program to swap values of two int variables.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\nEnter a number for A : ");
    scanf("%d",&a);
    printf("\nEnter a number for B : ");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("\nA = %d\nB = %d\n\n",a,b);
    return 0;
}
