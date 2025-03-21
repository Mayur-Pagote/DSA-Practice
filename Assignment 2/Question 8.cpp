// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all
// the three points fall on one straight line.

#include <iostream>
using namespace std;

int main() 
{
    float m1, m2, x1,x2,x3,y1,y2,y3;
    
    cout<<"Enter X1 and Y1: ";
    cin>>x1>>y1;
    cout<<endl;
    
    cout<<"Enter X2 and Y2: ";
    cin>>x2>>y2;
    cout<<endl;
    
    cout<<"Enter X3 and Y3: ";
    cin>>x3>>y3;
    cout<<endl;
    
    m1 = (x2 - x1)/(y2 - y1);
    m2 = (y3 - y2)/(x3 - x2);
    
    if (m1 == m2) cout<<"Staright Line";
    else cout<<"Not on straight line";
    
}
