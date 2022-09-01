// Write a recursive function to print first N odd natural numbers in reverse order.

void Odd(int);
#include <stdio.h>

void Odd(int k)
{
    if(k > 0)
    {
        if(k%2) printf("%d\t",k);
        Odd(k-1);
    }
}


int main()
{
    int num; 
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    Odd(num);
    printf("\n\n");
    return 0;
}



