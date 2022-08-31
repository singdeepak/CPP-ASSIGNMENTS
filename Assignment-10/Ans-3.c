/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS) */

#include <stdio.h>

int even_odd(int);
int main()
{
    int num, k;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    k = even_odd(num);
    if(k == 1)
        printf("even");
    else if(k == 0)
        printf("odd");
    else
        printf("Invalid");
    return 0;
}


int even_odd(int a)
{
    if(a%2)
        return 0;
    else
        return 1;
}