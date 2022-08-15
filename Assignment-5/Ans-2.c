// Write a program to print the first N natural numbers.


#include <stdio.h>

int main()
{
    int num,a;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    for(a=1; a<=num; a++)
        printf("%d\t",a);
    return 0;
}
