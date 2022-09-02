// Write a function to print all Prime numbers between two given numbers. (TSRN).

#include <stdio.h>

void Prime(int, int);
void Prime(int l, int u)
{
    int k = l+1, p;
    printf("\n\n");
    while(k <= u-1)
    {
        for(p = 2; p < k; p++)
        {
            if(k % p == 0) break;
        }
        if(p == k) printf("%d\t",k);
        k++;
    }
    printf("\n\n");
}


int main()
{
    int a, b;
    printf("\nEnter Lower Limit : ");
    scanf("%d",&a);
    printf("\nEnter Upper Limit : ");
    scanf("%d",&b);
    Prime(a,b);
    return 0;
}