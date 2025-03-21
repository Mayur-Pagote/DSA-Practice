// Write a program to input sides of a triangle and check whether a triangle is
// equilateral, scalene or isosceles triangle.

#include <iostream>
using namespace std;

int main() 
{
    float s1, s2, s3;
    cout<<"Enter side one: ";
    cin>>s1;
    cout<<endl;
    
    cout<<"Enter side two: ";
    cin>>s2;
    cout<<endl;
    
    cout<<"Enter side three: ";
    cin>>s3;
    cout<<endl;
    
    if (s1==s2 and s2==s3) cout<<"Equilateral";
    else if(s1!=s2 and s2!=s3 and s3!=s1) cout<<"Scalen";
    else cout<<"Isosceles";
    
    
}
