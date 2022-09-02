// Write a function to find the next prime number of a given number. (TSRS).

#include <stdio.h>

int nexPrime(int);
int nexPrime(int a)
{
    int b, i = 1;
    while ((a + i) != b)
    {
        for (b = 2; b < (a+i); b++)
        {
            if ((a+i) % b == 0)
                break;
        }
        if (b == a + i) return(a+i);
        else i++;
    }
}

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("\nNext prime number of %d is %d\n\n", num, nexPrime(num));
    return 0;
}
