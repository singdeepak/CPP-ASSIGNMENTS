// Write a program to print cubes of the first N natural numbers.


#include <stdio.h>

int main()
{
    int num,a; 
    printf("\nEnter a number : ");
    scanf("%d",&num);
    for(a=1; a<=num; a++)
    {
        printf("%d\t",a*a*a);
    }
    return 0;
}
