/* Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */

#include <iostream>
using namespace std;

class Complex{
    private:
        int rel, img;
    public:
        void setData(int a, int b)
        {rel = a, img = b;}

        void getData()
        {cout<<endl<<"Real = "<<rel<<" & Imaginary = "<<img<<endl<<endl;}
};


int main()
{
    int x,y;
    cout<<endl<<"Enter Real Value : ";
    cin>>x;
    cout<<"Enter Imaginary Value : ";
    cin>>y;
    Complex obj;
    obj.setData(x,y);
    obj.getData();
    return 0;
}