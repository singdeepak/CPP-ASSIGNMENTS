// Write a program to find the Nth term of the Fibonnaci series.


#include <stdio.h>

int main()
{
    int a,b,c,d,temp;

    printf("\nEnter the Nth term : ");
    scanf("%d",&a);
    c=-1,d=1;
    printf("\n\n");
    for(b=1; b<=a; b++)
    {
        temp=c+d;
        c=d;
        d=temp;
    }
    printf("%dth term is : %d\n\n",a,temp);
    return 0;
}