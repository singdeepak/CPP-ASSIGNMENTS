//  Write a program to print the first N natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int num,a;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    for(a=num; a>0; a--)
        printf("%d\t",a);
    return 0;
}

