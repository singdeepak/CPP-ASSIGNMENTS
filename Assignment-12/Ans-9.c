// Write a recursive function to print octal of a given decimal number.

#include <stdio.h>

void Binary(int);
int main()
{
    int num; 
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    Binary(num);
    printf("\n\n");
    return 0;
}


void Binary(int n)
{
    if(n > 0)
    {
        Binary(n/8);
        printf("%d",n%8);
    }
}

