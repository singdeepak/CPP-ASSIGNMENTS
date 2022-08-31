// Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <stdio.h>

int check(int, int);
int main()
{
    int num, digit, k;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("\nEnter a digit : ");
    scanf("%d", &digit);
    k = check(num, digit);
    if (k == 1)
        printf("\nYes\n\n");
    else
        printf("\nNo\n\n");
    return 0;
}

int check(int a, int b)
{
    int c, d = 0;
    while (a != 0)
    {
        c = a % 10;
        if (c == b)
            d++;
        a = a / 10;
    }
    if (d > 0)
        return 1;
    else
        return d;
}
