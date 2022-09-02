// Write a function to print first N prime numbers (TSRN).

#include <stdio.h>

void Prime(int);
void Prime(int n)
{
    int k = 2, a, count = 0;
    printf("\n\n");
    while (1)
    {
        for (a = 2; a < k; a++)
        {
            if (k % a == 0)
                break;
        }
        if (a == k)
        {
            printf("%d\t", k);
            count++;
        }
        if(count > n - 1) break;
        else k++;
    }
    printf("\n\n");
}


int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    Prime(num);
    return 0;
}