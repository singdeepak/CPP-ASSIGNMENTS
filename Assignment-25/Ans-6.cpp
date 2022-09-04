/* Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called. */


#include <iostream>
using namespace std;

class Square{
    private:
        int num;

    public:
        void Getter(int n)
        {num = n;}

        int Setter()
        {return num * num;}
};


int main()
{
    int x;
    cout<<endl<<"Enter a number : ";
    cin>>x;

    Square obj;
    obj.Getter(x);
    cout<<endl<<"Square of "<<x<<" is "<<obj.Setter()<<endl<<endl;
    return 0;
}