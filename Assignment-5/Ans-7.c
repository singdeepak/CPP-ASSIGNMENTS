// Write a program to print the first N even natural numbers in reverse order



#include <stdio.h>

int main()
{
    int num,a;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    for(a=num; a>0; a--)
    {
        if(a%2==0) printf("%d\t",a);
    }
    return 0;
}
