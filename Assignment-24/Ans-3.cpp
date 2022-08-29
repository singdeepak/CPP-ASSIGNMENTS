// Define a function to calculate x raised to the power y.

#include <iostream>
// #include <math.h>
using namespace std;

int Power(int, int);
int main()
{
    int x, y;
    cout << endl
         << "Enter two number : ";
    cin >> x >> y;
    cout << endl
         << "Result = " << Power(x, y) << endl
         << endl;
    return 0;
}

int Power(int a, int b)
{
    int temp = 1, r = 1;
    while (temp <= b)
    {
        r = r * a;
        temp++;
    }
    return r;
    // return pow(a,b);
}