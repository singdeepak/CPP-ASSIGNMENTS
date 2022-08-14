// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    if(num%7==0 || num%3==0) printf("Yes, It is divisible");
    else printf("Not divisible");
    return 0;
}
