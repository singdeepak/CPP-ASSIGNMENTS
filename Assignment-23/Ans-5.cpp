// Write a C++ program to calculate the volume of a cuboid.

#include <iostream>
using namespace std;

int main()
{
    int l, w, h;
    cout << endl
         << "Enter length, width, height : ";
    cin >> l >> w >> h;

    cout << "Volume of a cuboid is  " << l * w * h << endl
         << endl;

    return 0;
}
