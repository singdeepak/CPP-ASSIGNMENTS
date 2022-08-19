// Write a program to find the first N term of the Fibonnaci series.


#include <stdio.h>

int main()
{
    int a,b,c,d,temp;

    printf("\nEnter the no. of term : ");
    scanf("%d",&a);
    c=-1,d=1;
    printf("\n\n");
    for(b=1; b<=a; b++)
    {
        temp=c+d;
        printf("%d\t",temp);
        c=d;
        d=temp;
    }
    printf("\n\n");
    return 0;
}