// Write a program to find next Prime number of a given number.

#include <stdio.h>

int main()
{
    int num,a,b;
    printf("\nEnter any number : ");
    scanf("%d",&num);

    for(a=num+1; a>0; a++)
    {
        for(b=2; b<a; b++)
        {
            if(a%b==0)
                break;
        }
        if(b==a)
        {
            printf("\nNext prime number of %d is %d\n\n",num,a);
            break;
        }
    }
    return 0;
}





/* Write a program to find next Prime number of a prime number.


#include <stdio.h>

int main()
{
    int num,temp,a,b;
    printf("\nEnter any number : ");
    scanf("%d",&num);

    for(temp=2; temp<num; temp++)
    {
        if(num%temp==0) 
            break;
    }


    if(temp==num) 
    {   
        for(b=num+1; b>0; b++)
        {
            for(a=2; a<b; a++)
            {
                if(b%a==0)
                    break;
            }
            if(b==a)
            {
                printf("\n%d is next prime number of %d\n\n",b,num);
                break;
            }
        }
            
    }

    return 0;
}

*/