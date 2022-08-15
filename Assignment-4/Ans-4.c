// Write a program to print the first 10 odd natural numbers.


#include <stdio.h>

int main()
{
    int k;

    for(k=1; k <= 10; k++)
        if(k%2!=0) printf("%d\t",k);
    return 0;
}