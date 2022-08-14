// Write a program to check whether a given number is divisible by 5 or not.


#include <iostream>
using namespace std;


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if(num%5==0)
        printf("Yes, It is divisible by 5");
    else{
        printf("No, It is not divisible by r");
    }
    return 0;
}
