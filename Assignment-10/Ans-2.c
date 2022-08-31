// Write a function to calculate simple interest. (TSRS).

#include <stdio.h>

float Interest(float, int, int);
int main()
{
    float initial_bal;
    int rate, time;

    printf("\nEnter initial balance : ");
    scanf("%f", &initial_bal);

    printf("\nEnter interest rate : ");
    scanf("%d",&rate);

    printf("\nEnter time : ");
    scanf("%d",&time);

    printf("\nSimple Interest = %0.2f\n\n",Interest(initial_bal, rate, time));

    return 0;
}


float Interest(float a, int b, int c)
{
    float k;
    k = (a*b*c)/100;
    return(k);
}