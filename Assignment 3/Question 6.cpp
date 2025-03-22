// Write a program to take an integer n as input and print numbers
// from n to 1 using a loop.

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{   
    int val;
    cout<<"Enter a number: ";
    cin>>val;
    cout<<endl;
    
    
    for (int i = val; i>=1; i--){
      cout<<i<<endl;
    }
}
