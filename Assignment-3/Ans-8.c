/* Write a program to check whether a given year is a leap year or not. */

#include <stdio.h>

int main()
{
    int year;
    printf("\nEnter a year : ");
    scanf("%d",&year);

    if(year%4) printf("It is not a leap year");
    else if(year%100) printf("Yes, It's leap year");
    else if(year%400) printf("It is not a leap year");
    else printf("Yes, It's leap year");
    return 0;
}