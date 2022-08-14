// Write a program to check whether a given number is positive or non-positive.


#include <iostream>
using namespace std;

int main()
{
    float num;
    printf("\nEnter an number : ");
    scanf("%f",&num);

    if(num>0)
        printf("Positive");
    else
        printf("Non-Positive");
    return 0;
}