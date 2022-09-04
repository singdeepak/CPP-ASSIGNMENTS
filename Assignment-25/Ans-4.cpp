/* Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class. */


#include <iostream>
using namespace std;

class LargestNumber{
    private:
        int first, second, third;

    public:
        void Getter(int f, int s, int t)
        {first = f, second = s, third = t;}

        int Setter()
        {
            return (first > second ? first > third ? first : third : second > third ? second : third);
        }
};


int main()
{
    int x,y,z;
    cout<<endl<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    cout<<"Enter third number : ";
    cin>>z;

    LargestNumber obj;
    obj.Getter(x,y,z);
    cout<<endl<<"Largest Number is : "<<obj.Setter()<<endl<<endl;

    return 0;
}