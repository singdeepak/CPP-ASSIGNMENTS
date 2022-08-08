/*. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/

#include <stdio.h>

int main()
{
    int num,temp;
    printf("\nEnter a three digit number only : ");
    scanf("%d",&num);

    while(num%10!=0)
    {
        temp=num%10;
        printf("%d",temp);
        num=num/10;
    }
    return 0;
}