// Write a C++ program to swap values of two int variables without using third variable

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter any two number : ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A = " << a << " B = " << b << endl
         << endl;

    return 0;
}