// Write a recursive function to print reverse of a given number.
#include <stdio.h>

void Reverse(int);
void Reverse(int n)
{
    if(n > 0)
    {
        printf("%d",n%10);
        Reverse(n/10);
    }
}

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\n");
    Reverse(num);
    printf("\n\n");
    return 0;
}