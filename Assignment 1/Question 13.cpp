// Write a program to find the euclidean distance between two coordinates.Take both
// the coordinates from the user as input.

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int x1, x2, y1, y2, dist;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<endl;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<endl;
    cout<<"Enter y1: ";
    cin>>y1;
    cout<<endl;
    cout<<"Enter y2: ";
    cin>>y2;
    cout<<endl;
    
    dist = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    
    cout<<"Eucledian Distance is: "<<sqrt(dist);
    
}
