// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void Natural(int);
int main()
{
    int num; 
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    Natural(num);
    printf("\n\n");
    return 0;
}



void Natural(int k)
{
    if(k > 0)
    {
        printf("%d\t",k);
        Natural(k-1);
    }
}