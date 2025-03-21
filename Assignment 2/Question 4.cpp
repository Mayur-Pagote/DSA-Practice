// Given the length and breadth of a rectangle, write a program to find whether
// numerically the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;

int main() 
{
    float l, b, area, peri;
    
    cout<<"Enter length: ";
    cin>>l;
    cout<<endl;
    
    cout<<"Enter breadth: ";
    cin>>b;
    cout<<endl;
    
    area = l*b;
    peri = 2*(l+b);
    
    if (area > peri) cout<<"Area is greater";
    else cout<<"Area is not greater";
}
