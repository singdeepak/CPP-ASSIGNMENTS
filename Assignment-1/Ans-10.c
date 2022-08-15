/* Ans-10. WAP to take date as an input in below given format and convert the date format and
display the result as given below. */

#include <stdio.h>

void main()
{
    int d,m,y;
    printf("Enter the date in (dd/mm/yyyy) format\n");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day - %d, Month - %d, Year = %d\n",d,m,y);
}