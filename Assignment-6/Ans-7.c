// Write a program to count digits in a given number.


#include <stdio.h>

int main()
{
    long num,count=0,k;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(k=1; num!=0; k++)
    {
        num%10;
        count++;
        num = num/10;
    }
    printf("\nTotal digit in given number is %d\n\n",count);
    return 0;
}