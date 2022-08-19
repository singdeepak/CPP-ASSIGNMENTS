// Write a program to print all Prime numbers under 100.


#include <stdio.h>

int main()
{
    int f,temp;
    for(f=1; f<=100; f++)
    {
        for(temp=2; temp<f; temp++)
        {
            if(f%temp==0)
                break;
        }
        if(temp==f) printf("%d\t",f);
    }
    return 0;
}