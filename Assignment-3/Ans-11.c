/* Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
 */

#include <stdio.h>

int main()
{
    int a,b,c,d,e,m;
    printf("\nEnter 1st subject marks : ");
    scanf("%d",&a);
    printf("\nEnter 2nd subject marks : ");
    scanf("%d",&b);
    printf("\nEnter 3rd subject marks : ");
    scanf("%d",&c);
    printf("\nEnter 4rt subject marks : ");
    scanf("%d",&d);
    printf("\nEnter 5th subject marks : ");
    scanf("%d",&e);

   if(a<33) printf("\nFail in first subject\n");
   else if(b<33) printf("\nFail in second subject\n");
   else if(c<33) printf("\nFail in third subject\n");
   else if(d<33) printf("\nFail in fourth subject\n");
   else if(e<33) printf("\nFail in fifth subject\n");
   else printf("\nPass in all subject\n\n");
    
   return 0;
}