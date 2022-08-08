/* Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
 */

#include <stdio.h>

int main()
{
    int num,digit;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\nEnter a digit : ");
    scanf("%d",&digit);

    printf("\n%d%d\n\n",num,digit);
    return 0;
}