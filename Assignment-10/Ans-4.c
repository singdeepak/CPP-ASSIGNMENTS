// Write a function to print first N natural numbers (TSRN).

#include <stdio.h>

void Natural(int);
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    Natural(num);
    return 0;
}


void Natural(int x)
{
    int a=1;
    while(a <= x)
    {
        printf("%d\t",a);
        a++;
    }
}
