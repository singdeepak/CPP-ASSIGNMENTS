/* Ans-4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format. */

#include <stdio.h>

void main()
{
    float radius,area;
    printf("\nEnter the radius\n");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("\"Area of circle is %0.2f having the radius %0.2f\"",area,radius);
}