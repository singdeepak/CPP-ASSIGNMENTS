// Write a program to input a three-digit number and display the sum of the digits.


#include <stdio.h>

int main()
{
    int num,sum=0,temp;
    printf("\nEnter a three digit number\n");
    scanf("%d",&num);

    while(num%10!=0)
    {
        temp = num%10;
        sum = sum + temp;
        num = num/10;
    }
    printf("\nSum of three digit number is %d\n\n",sum);
    return 0;
}