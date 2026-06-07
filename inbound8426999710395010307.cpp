 
#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14;
    double side, area;
    
    cout << "Enter square side: ";
    cin >> side;
    
    ;
    area =ceil( PI * (pow(side,2) /4));
    
    cout << "Circle Area inscribed in square = " << area << endl;
    
    return 0;
}