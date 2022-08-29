// Define a function to check whether a given number is a term in a Fibonacci series or not.

#include <iostream>
using namespace std;

int Fibo(int);
int main()
{
    int num, k;
    cout << endl
         << "Enter a number : ";
    cin >> num;
    k = Fibo(num);
    if(k == 0)
        cout<<"Yes"<<endl<<endl;
    else
        cout<<"No"<<endl<<endl;
    return 0;
}

int Fibo(int n)
{
    int a = 0, b = 1, i;
    if(n == a || n == b) return 0;
    i =  a + b;
    while (i <= n)
    {
        if (n == i) return 0;
        a = b;
        b = i;
        i = a + b;
    }
    return 1;
}
