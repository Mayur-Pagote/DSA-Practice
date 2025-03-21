// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at
// the origin, viz. (0, 0).

#include <iostream>
using namespace std;

int main() 
{
    int x,y;
    
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<endl;
    
    cout<<"Enter y coordinate: ";
    cin>>y;
    cout<<endl;
    
    if (x == 0 and y == 0) cout<<"Origin";
    else if(x == 0 and y != 0) cout<<"Y-Axis";
    else cout<<"X-Axis";
    
}
