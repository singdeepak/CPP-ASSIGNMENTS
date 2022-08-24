// Write a C++ program to calculate an average of 3 numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float result;

    cout << "Enter three number : ";
    cin >> a >> b >> c;
    result = (a + b + c) / 3.0;
    cout << "Average of three number is : " << result;

    return 0;
}
