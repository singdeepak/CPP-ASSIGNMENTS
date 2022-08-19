// Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>

int main()
{
    int a,b,c,min;
    printf("Enter any two number : ");
    scanf("%d%d",&a,&b);
    min = a < b ? a : b;
    for(c=2; c<= min; c++)
    {
        if(a%c==0 && b%c==0)
            break;
    }
    if(c==min+1)
        printf("%d and %d are co-prime",a,b);
    else
        printf("%d and %d are not co-prime",a,b);
    return 0;
}