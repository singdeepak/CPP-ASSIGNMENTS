// Write a program to check whether a given number is an Armstrong number or not.

#include <stdio.h>

int main()
{
    int k,num,sum=0,temp;
    printf("\nEnter a number : ");
    scanf("%d",&k);

    num = k;
    while(num!=0)
    {
        temp = num%10;
        sum = sum + temp*temp*temp;
        num = num/10;
    }
    sum == k ? printf("%d is armstrong number",k) : printf("%d not armstrong number",k);
    return 0;
}
