// Write a program to calculate HCF of two numbers.

#include <stdio.h>

int main()
{
    int a,b,range;
    printf("\nEnter any two number : ");
    scanf("%d%d",&a,&b);
    for(range = a<b ? a : b; range >= 1; range--)
        if(a%range==0 && b%range==0)
            break;
    printf("HCF is : %d",range);
    return 0;
}