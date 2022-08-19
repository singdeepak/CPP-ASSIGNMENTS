// Write a program to print all Armstrong numbers under 1000.

#include <stdio.h>

int main()
{
    int a,k,num,sum;
    for(num=1; num<=1000; num++)
    {
        sum=0;
        k=num;
        while(k!=0)
        {
            a = k%10;
            sum = sum + a*a*a;
            k = k/10;
        }
        if(sum == num) printf("%d\t",num);
    }
    return 0;
}