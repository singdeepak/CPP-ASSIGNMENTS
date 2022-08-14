/* Write a program to check whether a given number is an even number or an odd
number. */


#include <iostream>
using namespace std;

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if(num%2)
        printf("Odd");
    else{
        printf("Even");
    }
    return 0;
}