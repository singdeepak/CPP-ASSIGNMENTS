// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

int Fact(int);
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\n\nFactorial of %d is %d\n\n",num,Fact(num));
    return 0;
}

int Fact(int n)
{
    int a=1,f=1;
    while(a <= n)
    {
        f=f*a;
        a++;
    }
    return f;
}
