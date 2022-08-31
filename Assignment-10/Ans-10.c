/* Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN) */

#include <stdio.h>

void prime_factor(int);
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    prime_factor(num);
    return 0;
}


void prime_factor(int n)
{
    int p,q;

    for(p = 1; p <= n; p++)
    {
        for(q = 2; q < p; q++)
        {
            if(p%q==0) break;
        }
        if(q == p)
        {
            while(n%p==0)
            {
                printf("%d\t",p);
                n = n/p;
            }
        }
    }
}