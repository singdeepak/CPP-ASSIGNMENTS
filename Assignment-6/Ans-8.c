// Write a program to check whether a given number is a Prime number or not.

#include <stdio.h>

int main()
{
    int num,k;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(k=2; k<num; k++)
    {
        if(num%k==0)
            break;
    }

    if(k==num) printf("%d is prime number",num);
    else printf("Not prime number");
    return 0;
}
