/* Ans-11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute” */

#include <stdio.h>

void main()
{
    int h,m;
    printf("\nEnter Hour and Minute\n");
    scanf("%d:%d",&h,&m);
    printf("%d Hour an %d Minute",h,m);
}
