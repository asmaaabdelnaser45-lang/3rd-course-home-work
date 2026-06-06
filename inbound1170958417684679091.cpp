#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double d;
    cout << "please enter the diameter of the circle" << endl;
    cin>>d;
    const double PI=3.14;
    double area= PI*(pow(d,2)/4);
    cout<<"the area is" <<area;
    
    return 0;
}