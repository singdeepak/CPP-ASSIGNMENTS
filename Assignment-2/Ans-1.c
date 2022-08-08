// Write a program to print unit digit of a given number


#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number\n");
    scanf("%d",&num);
    printf("\nUnit digit of %d is %d\n\n",num,num%10);
    return 0;
}