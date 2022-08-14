// Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if(num>0) printf("Number is positive");
    else if(num<0) printf("Number is negative");
    else if(num == 0) printf("Number is zero");
    else printf("Invalid number");
    return 0;
}