/* Define a class Greatest and define instance member function to find Largest among
3 numbers using classes. */


#include <iostream>
using namespace std;

class Greatest{
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

    Greatest obj;
    obj.Getter(x,y,z);
    cout<<endl<<"Greatest Number is : "<<obj.Setter()<<endl<<endl;

    return 0;
}