/* Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class. */

#include <iostream>
using namespace std;

class ReverseNumber
{
private:
    int num;

public:
    void Getter(int x)
    {
        num = x;
    }

    void Setter()
    {
        int x, i = 0;
        cout<<endl<<"Reverse number is : ";
        while (num > 0)
        {
            x = num % 10;
            cout<<x;
            num = num / 10;
        }
        cout<<endl<<endl;
    }
};

int main()
{
    int num;
    cout << endl
         << "Enter a number : ";
    cin >> num;

    ReverseNumber obj;
    obj.Getter(num);
    obj.Setter();

    return 0;
}