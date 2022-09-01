// Write a recursive function to print squares of first N natural numbers.

#include <stdio.h>

void Square(int);
int main()
{
    int num; 
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    Square(num);
    printf("\n\n");
    return 0;
}



void Square(int k)
{
    if(k > 0)
    {
        Square(k-1);
        printf("%d\t",k*k);
    }
}

