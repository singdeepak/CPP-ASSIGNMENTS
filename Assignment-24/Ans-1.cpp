// Define a function to check whether a given number is a Prime number or not.

#include <iostream>
using namespace std;

int Prime(int);
int main()
{
    int num, temp;
    cout << "\nEnter a number : ";
    cin >> num;
    temp = Prime(num);
    if (temp == 1)
        cout << endl
             << "It is not prime number" << endl
             << endl;
    else if (temp == 0)
        cout << endl
             << "Yes, It is a prime number" << endl
             << endl;
    else
        cout << endl
             << "Invalid Number" << endl
             << endl;
    return 0;
}

int Prime(int n)
{
    int k = 2;
    while (k < n)
    {
        if (n % k == 0)
            break;
        k++;
    }
    if (k == n)
        return 0;
    else
        return 1;
}