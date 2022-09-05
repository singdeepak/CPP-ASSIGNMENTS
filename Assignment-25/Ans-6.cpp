/* Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called. */


#include <iostream>
using namespace std;

class Square{
    int counter = 0;
    private:
        int num;

    public:
        void Getter(int n)
        {num = n;}

        int Squa()
        {
            return num * num;
        }
};


int main()
{
    int x;
    cout<<endl<<"Enter a number : ";
    cin>>x;

    Square obj;
    obj.Getter(x);
    cout<<endl<<"Square of "<<x<<" is "<<obj.Squa()<<endl<<endl;
    return 0;
}