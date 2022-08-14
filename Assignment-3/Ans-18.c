/* Write a program which takes the month number as an input and display number of
days in that month */

#include <stdio.h>

int main()
{
    int month;
    printf("\nEnter month number : ");
    scanf("%d",&month);

    if(month > 0 && month <= 12)
    {
        if(month == 2) printf("There are total 28 or 29 days in this month");
        else if(month == 7 || month == 8) printf("There are total 31 days in this month");
        else if(month == 12 || month == 1) printf("There are total 31 days in this month");
        else if(month%2!=0) printf("There are total 31 days in this month");
        else if(month%2==0) printf("There are total 30 days in this month");
    }
    else printf("Invalid month");
    return 0;
}