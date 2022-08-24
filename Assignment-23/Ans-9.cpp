// Write a C++ program to find the maximum of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter any two number : ";
    cin >> a >> b;

    if (a > b)
        cout << a << " is larger than " << b;
    else if (b > a)
        cout << b << " is larger than " << a;
    else if (a == b || b == a)
        cout << "Both are equal";
    else
        cout << "Invalid number";

    return 0;
}
