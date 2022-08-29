// Define a function to swap data of two int variables using call by reference

#include <iostream>
using namespace std;

void swap(int&, int&);
int main()
{
    int a,b;
    cout<<"Enter any two number : ";
    cin>>a>>b;
    swap(a, b); //call by reference
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<endl;
    return 0;
}

void swap(int &p, int &q)
{
    p = p + q;
    q = p - q;
    p = p - q;
}
