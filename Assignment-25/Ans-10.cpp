/* Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc. */

#include <iostream>
using namespace std;

class Area{
    private:
        int x,y;

    public:
        void setData(int a, int b)
        {x = a, y = b;}

        void squareArea()
        {
            cout<<endl<<"Area of square is : "<<x*x<<endl<<endl;
        }

        void rectangleArea()
        {
            cout<<endl<<"Area of rectangle is : "<<x*y<<endl<<endl;
        }


        void circleArea()
        {
            float k;
            k = 3.14*x*x;
            cout<<endl<<"Area of circle is : "<<k<<endl<<endl;
        }
};


int main()
{
    int a,b;
    cout<<endl<<"Enter first number : ";
    cin>>a;
    cout<<endl<<"Enter second number : ";
    cin>>b;

    Area p,q,r;
    p.setData(a,b);
    p.squareArea();
    p.rectangleArea();
    p.circleArea();

    return 0;
}