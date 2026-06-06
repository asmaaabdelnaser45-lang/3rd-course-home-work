#include <iostream>
#include <cmath>
using namespace std;
int main() {
//writ aprogram to calculaterectiangle aarea through
//diaggonal and side size area of rectianggl and print it 
double a,d;
cout<<"please enter the side size and dianggoal\n";
cin>>a >>d;
double b=sqrt(pow(d,2)-pow(a,2));
double area =a*b;
cout<<"the rectiangl size =" <<area ;

return 0;
}
   
    
    
     
    
    
    