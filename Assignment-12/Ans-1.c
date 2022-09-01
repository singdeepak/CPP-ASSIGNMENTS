// Write a recursive function to print first N natural numbers.

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


void Natural(int n)
{
    if(n > 0)
    {
        Natural(n-1);
        printf("%d\t",n);
    }

}