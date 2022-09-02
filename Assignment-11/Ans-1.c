// Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>

int LCM(int, int);
int LCM(int a, int b)
{
    int l = a > b ? a : b;
    while(l <= a * b)
    {
        if(l % a == 0 && l % b == 0) return l;
        else l++;
    }
}



int main()
{
    int x,y;
    printf("\nEnter any two number : ");
    scanf("%d%d",&x,&y);
    printf("\nLCM of %d and %d is %d\n\n",x,y,LCM(x,y));
    return 0;
}