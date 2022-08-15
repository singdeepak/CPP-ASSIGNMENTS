// Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int num,k,a;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(k=1; num!=0; k++)
    {
        a = num%10;
        printf("%d",a);
        num = num/10;
    }
    return 0;
}
