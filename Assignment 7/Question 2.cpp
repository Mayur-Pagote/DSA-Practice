// Write a function that takes the radius of a circle as an argument and returns
// its area.

#include <iostream>
using namespace std;

void find_circle_area(float r){
    float pi =  3.14;
    cout<<"Area of circle is: "<<pi * r * r;
}


int main() 
{
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<endl;
    
    find_circle_area(radius);
    
    
}
