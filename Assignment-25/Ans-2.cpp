/* Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time. */

#include <iostream>
using namespace std;

class Time{
    private:
        int hour, minute, second;

    public:
        void setTime(int h, int m, int s)
        {hour = h, minute = m, second = s;}

        void getTime()
        {
            cout<<endl<<hour<<" Hour "<<minute<<" Minute "<<second<<" Second"<<endl<<endl;
        }
        
};


int main()
{
    int h, m, s;
    cout<<endl<<"Enter Hour : ";
    cin>>h;
    cout<<"Enter Minute : ";
    cin>>m;
    cout<<"Enter Second : ";
    cin>>s;
    Time obj;
    obj.setTime(h, m, s);
    obj.getTime();

    return 0;
}
