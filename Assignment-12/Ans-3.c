// Write a recursive function to print first N odd natural numbers.

#include <stdio.h>

void Odd(int);
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



void Odd(int k)
{
    if(k > 0)
    {
        Odd(k-1);
        if(k%2) printf("%d\t",k);
    }
}