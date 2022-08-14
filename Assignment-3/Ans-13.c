// Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    if(num%3==0 && num%2==0) printf("Yes, It is divisible by 3 and 2");
    else printf("No, It is not divisible");
    return 0;
}
