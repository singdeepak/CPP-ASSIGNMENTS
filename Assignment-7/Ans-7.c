// Write a program to print all Prime numbers between two given numbers.


#include <stdio.h>

int main()
{
    int first,last,temp,a;
    printf("\nEnter first range : ");
    scanf("%d",&first);
    printf("\nEnter second range : ");
    scanf("%d",&last);

    for(temp=first; temp<=last; temp++)
    {
        for(a=2; a<temp; a++)
        {
            if(temp%a==0)
                break;
        }
        if(a==temp)
            printf("%d\t",temp);
    }
    return 0;
}
