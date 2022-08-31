// Write a function to calculate the area of a circle. (TSRS).

float circle(int);
#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    printf("\nArea of circle is : %0.2f\n\n",circle(radius));
    return 0;
}


float circle(int r)
{
    return(3.14*r*r);
}
