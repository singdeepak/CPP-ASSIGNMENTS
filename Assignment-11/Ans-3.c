// Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>

int Prime(int);
int Prime(int a)
{
    int b;
    for(b = 2; b < a; b++)
    {
        if(a % b == 0) break;
    }
    if(b == a) return 0;
    else return 1;
}


int main()
{
    int num; 
    printf("\nEnter a number : ");
    scanf("%d",&num);
    Prime(num) ? printf("\nNOt a prime number\n\n") : printf("\nIt is a prime number\n\n");
    return 0;
}
