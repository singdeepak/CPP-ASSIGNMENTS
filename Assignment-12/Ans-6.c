//Write a recursive function to print first N even natural numbers in reverse order.

#include <stdio.h>

void Even(int);
int main()
{
    int num; 
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    Even(num);
    printf("\n\n");
    return 0;
}



void Even(int k)
{
    if(k > 0)
    {
        if(k%2==0) printf("%d\t",k);
        Even(k-1);
    }
}
