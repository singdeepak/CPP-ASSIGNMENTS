// Write a program to print size of an int, a float, a char and a double type variable.


#include <stdio.h>

int main()
{
    int a;
    char ch;
    float f;
    double d;

    printf("\n%lu\n",sizeof(a));
    printf("%lu\n",sizeof(ch));
    printf("%lu\n",sizeof(f));
    printf("%lu\n\n",sizeof(d));
    return 0;
}