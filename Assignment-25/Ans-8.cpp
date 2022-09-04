/* Define a class Rectangle and define an instance member function to find the area of
the rectangle. */


#include <iostream>
using namespace std;

class Rectangle{
    private:
        float l, b;

    public:
        void setData(float a, float c)
        {l = a, b = c;}

        float Area()
        {return l * b;}
};

int main()
{
    float l, b;
    cout<<endl<<"Enter length : ";
    cin>>l;
    cout<<"Enter breadth : ";
    cin>>b;

    Rectangle obj;
    obj.setData(l,b);
    cout<<endl<<"Area of Rectangle is : "<<obj.Area()<<endl<<endl;

    return 0;
}