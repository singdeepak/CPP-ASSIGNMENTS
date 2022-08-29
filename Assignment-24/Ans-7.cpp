// Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;

int Add(int, int, int=0);
int main()
{
    int a,b;
    cout<<endl<<"Enter any two number : ";
    cin>>a>>b;
    cout<<endl<<"Addition of "<<a<<" & "<<b<<" is = "<<Add(a,b)<<endl<<endl;
    int c;
    cout<<"Enter any three number : ";
    cin>>a>>b>>c;
    cout<<endl<<"Addition of "<<a<<" "<<b<<" & "<<c<<" is = "<<Add(a,b,c)<<endl<<endl;
    return 0;
}

int Add(int x, int y, int z)
{
    return (x+y+z);
}
