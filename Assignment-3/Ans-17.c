/* Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.  */

#include <stdio.h>

int main()
{
    int f, s, t, k;
    printf("\nEnter three side length of triable\n");
    scanf("%d%d%d",&f,&s,&t);
    k=f+s+t;
    if(f!=0 && s!=0 && t!=0 && k<=180) printf("Valid triangle");
    else printf("This is invalid triangle");
    return 0;
}