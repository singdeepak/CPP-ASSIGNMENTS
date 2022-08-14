/* Write a program to check whether a given number is an even number or an odd
number without using % operator. */


#include <stdio.h>
using namespace std;

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if((num & 1)==0)
          printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
