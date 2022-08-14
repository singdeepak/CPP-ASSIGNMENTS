// Write a program to check whether a given number is a three-digit number or not.


#include <iostream>
using namespace std;

int main()
{
    int num,count=0;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        num%10;
        count++;
        num = num/10;
    }
    if(count==3)
        printf("Yes, It is 3 digit number");
    else
        printf("No, It's not");
    return 0;
}