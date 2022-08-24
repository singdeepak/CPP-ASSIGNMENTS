// Write a C++ program to add all the numbers of an array of size 10.

#include <iostream>
using namespace std;

int main()
{
    int A[10], i = 0, sum = 0;
    while (i < 10)
    {
        cout << "Enter " << i + 1 << " Number : ";
        cin >> A[i];
        sum = sum + A[i];
        i++;
    }
    cout << endl
         << "Sum of 10 array elements is " << sum << endl
         << endl;

    return 0;
}