// Given the radius of the circle predict whether numerically area of this circle is
// larger than the circumference or not.

#include <iostream>
using namespace std;

int main() 
{
    float area, circumference, pi = 3.14;
    float radius;
    
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<endl;
    
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    
    if (area > circumference){
      cout<<"Area is large";
    }
    else cout<<"Area is not large";
}
