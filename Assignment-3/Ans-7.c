/* Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots */

#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("\nEnter a,b,c for quadratic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    b = b * b;
    d = 4*a*c;
    if((b-d) > 0) printf("Roots are real & distinct");
    else if((b-d) == 0) printf("Roots are real and equal");
    else if((b-d) < 0) printf("Roots are imaginary");
    return 0;
}