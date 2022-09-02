// Write a function to print first N terms of Fibonacci series (TSRN).

#include <stdio.h>

void Fibo(int);
void Fibo(int n)
{
    int a = -1, b = 1, k = 0, temp;
    printf("\n\n");
    while(k < n)
    {
        temp =  a + b;
        printf("%d\t",temp);
        a = b;
        b = temp;
        k++;
    }
    printf("\n\n");
}



int main()
{
    int num;
    printf("\nEnter Fibonacci Range : ");
    scanf("%d",&num);
    Fibo(num);
    return 0;
}