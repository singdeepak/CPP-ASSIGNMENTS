// Write a program to print a table of N.

#include <stdio.h>

int main()
{
    int num,a;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(a=1; a<=10; a++)
        printf("%d * %d = %d\n",num,a,num*a);
    return 0;
}