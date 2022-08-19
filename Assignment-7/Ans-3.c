// Write a program to check whether a given number is there in the Fibonacci series or not.

#include <stdio.h>

int main()
{
    int a,b,c,d,temp;
    printf("Enter a number : ");
    scanf("%d",&a);

    c=-1, d=1;
    for(b=1; b>0; b++)
    {
        temp=c+d;
        if(a==temp)
            break;
        else{
            c=d;
            d=temp; 
        }
    }
    
    if(a==temp)
        printf("Yes, %d is in fibonacci sereies.",a);
    else
        printf("No, %d is not in fibonacci sereies.",a);
    return 0;
}
