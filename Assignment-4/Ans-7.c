// Write a program to print the first 10 even natural numbers in reverse order.


#include <stdio.h>

int main()
{
    int k;
    for(k=10; k>0; k--)
        if(k%2==0) printf("%d\t",k);
    return 0;
}