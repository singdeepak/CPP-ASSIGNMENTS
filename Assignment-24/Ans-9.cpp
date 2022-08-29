/* Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real. */

#include <iostream>
using namespace std;

int Maximum(int, int);
float Maximum(float, float);
int main()
{
    int a,b;
    cout<<"Enter any two integer number : ";
    cin>>a>>b;
    cout<<"Maximum = "<<Maximum(a,b)<<endl<<endl;
    float x,y;
    cout<<"Enter any two real number : ";
    cin>>x>>y;
    cout<<"Maximum = "<<Maximum(x,y)<<endl<<endl;
    return 0;
}


int Maximum(int p, int q)
{
    if(p>q) return p;
    else return q;
}


float Maximum(float p, float q)
{
    if(p>q) return p;
    else return q;
}
