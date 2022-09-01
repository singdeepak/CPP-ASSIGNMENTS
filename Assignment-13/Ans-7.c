// Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>


int calculateHCF(int, int);
int main(){

    int num1, num2;

    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);

    int hcf = calculateHCF(num1, num2);

    printf("The hcf of %d and %d is %d",num1,num2,hcf);
}

int calculateHCF(int num1, int num2){
    if(num2 != 0) {

        return calculateHCF(num2, num1%num2);
    }else {

        return num1;
    }
}