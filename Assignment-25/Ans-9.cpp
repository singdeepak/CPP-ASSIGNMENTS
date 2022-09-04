/* Define a class Circle and define an instance member function to find the area of the
circle. */


#include <iostream>
using namespace std;

class Circle{
    private:
        float r;

    public:
        void getData(int a)
        {r = a;}

        float Area()
        {return 3.14*r*r;}
};


int main()
{
    float r;
    cout<<endl<<"Enter radius for circle : ";
    cin>>r;
    
    Circle obj;
    obj.getData(r);
    cout<<endl<<"Area of circle is : "<<obj.Area()<<endl<<endl;

    return 0;
}
