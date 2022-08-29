// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include <iostream>
using namespace std;

float Area(int);
int Area(int, int);
float Area(float, float);
int main()
{
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<"Area of circle is "<<Area(r)<<endl<<endl;
    int l,b;
    cout<<"Enter length & breadth : ";
    cin>>l>>b;
    cout<<"Area of rectangle is "<<Area(l,b)<<endl<<endl;
    float h, base;
    cout<<"Enter height and base : ";
    cin>>h>>base;
    cout<<"Area of triangle is "<<Area(h,base)<<endl<<endl;
    return 0; 
}

float Area(int R)
{
    return(3.14*R*R);
}

int Area(int L, int B)
{
    return(L*B);
}

float Area(float h, float b)
{
    return(0.5*h*b);
}