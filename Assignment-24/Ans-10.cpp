// Write functions using function overloading to add two numbers having different data types.

#include <iostream>
using namespace std;

int Add(int, int);
float Add(float, float);
int main()
{
    int a,b;
    cout<<"Enter any two integer number : ";
    cin>>a>>b;
    cout<<endl<<"Additon = "<<Add(a,b)<<endl<<endl;
    float x,y;
    cout<<"Enter any two float number : ";
    cin>>x>>y;
    cout<<endl<<"Addtion = "<<Add(x,y)<<endl<<endl;
    return 0;
}

int Add(int p, int q)
{
    return(p+q);
}

float Add(float p, float q)
{
    return(p+q);
}