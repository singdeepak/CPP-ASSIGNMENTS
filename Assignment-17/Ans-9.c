// Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "deepak singh";
    char temp;
    int i, j, len;
    len = strlen(str);

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("\n");
    for(i=0; i<12; i++)
        printf("%c",str[i]);
    printf("\n\n");
    return 0;
}