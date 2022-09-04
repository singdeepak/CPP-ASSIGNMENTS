/* Define a class Factorial and define an instance member function to find the Factorial
of a number using class. */

#include <iostream>
using namespace std;

class Factorial{
    private:
        int num;

    public:
        void setFactorial(int f)
        {num = f;}

        int getFactorial()
        {
            int i = 1, fact = 1;
            while(i <= num)
            {
                fact = fact * i;
                i++;
            }
            return fact;
        }
        
};


int main()
{
    int n;
    cout<<endl<<"Enter a number : ";
    cin>>n;
    Factorial obj;
    obj.setFactorial(n);
    cout<<endl<<"Factorial of "<<n<<" is "<<obj.getFactorial()<<endl<<endl;

    return 0;
}
