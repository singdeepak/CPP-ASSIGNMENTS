// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340).


#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    num=num/10;

    printf("\n%d0\n\n",num);
    return 0;
}