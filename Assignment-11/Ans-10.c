// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

#include <stdio.h>

int Series(int);
int main()
{
    int num;
    printf("Enter Series Range : ");
    scanf("%d", &num);
    printf("\n\n");
    printf("Sum of Series = %d", Series(num));
    printf("\n\n");
    return 0;
}



int Series(int a)
{
    int sum = 1, k = 1, total = 0, i = 1;
    while (i <= a)
    {
        while (k <= i)
        {
            sum = sum * k;
            k++;
        }
        total = total + sum / i;
        i++;
    }
    return total;
}