/* Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage. */

#include <stdio.h>

int main()
{
    float cp, sp, l, p;
    printf("\nEnter cost-price : ");
    scanf("%f",&cp);
    printf("\nEnter selling-price : ");
    scanf("%f",&sp);

    if(sp > cp)
    {
        p = sp - cp;
        printf("\nTotal profit is %0.2f%%\n\n",(p/cp) * 100);
    }

    else if(cp > sp)
    {
        l = cp - sp;
        printf("\nTotal loss is %0.2f%%\n\n",(l/cp) * 100);
    }

    else printf("\nNo any profit an loss\n\n");
    return 0;
}