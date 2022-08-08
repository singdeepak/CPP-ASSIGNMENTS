/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include <stdio.h>

int main()
{
    float amount;
    printf("\nEnter the amout in INR only : ");
    scanf("%f",&amount);
    printf("\nTotal USD in : %0.2f\n\n",amount*76.23);
    return 0;
}