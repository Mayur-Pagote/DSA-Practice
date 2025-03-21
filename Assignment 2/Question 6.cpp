// If the marks of A, B and C are input through the keyboard, write a program to
// determine the student scoring least marks.

#include <iostream>
using namespace std;

int main() 
{
    float m1, m2, m3;
    
    cout<<"Enter marks of first student";
    cin>>m1;
    cout<<endl;
    
    cout<<"Enter marks of second student";
    cin>>m2;
    cout<<endl;
    
    cout<<"Enter marks of third student";
    cin>>m3;
    cout<<endl;
    
    if (m1>m2 and m1>m3) cout<<"Marks of first student is grater";
    else if (m2>m1 and m2>m3) cout<<"Marks of second student is grater";
    else cout<<"Marks of third student is grater";
}
