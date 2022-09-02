// Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>

int HCF(int, int);
int HCF(int a, int b)
{
    int l = a < b ? a : b;
    while(l >= 1)
    {
        if(a % l == 0 && b % l == 0) return l;
        else l--;
    }
}



int main()
{
    int x,y;
    printf("\nEnter any two number : ");
    scanf("%d%d",&x,&y);
    printf("\nHCF of %d and %d is %d\n\n",x,y,HCF(x,y));
    return 0;
}