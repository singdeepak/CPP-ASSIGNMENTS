// Define a function to find the highest value digit in a given number.

#include <iostream>
using namespace std;

int Highest(int);
int main()
{
    int num;
    cout<<endl<<"Enter a number : ";
    cin>>num;
    cout<<"Highest value digit is : "<<Highest(num)<<endl<<endl;
    return 0;
}

int Highest(int n)
{
    int max=0, k;
    while(n>0)
    {
        k = n%10;
        if(k>max)
            max = k;
        n = n/10;
    }
    return max;
}
