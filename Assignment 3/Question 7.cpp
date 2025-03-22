// Write a C++ program to take an integer n as input and print the sum
// of the first n natural numbers using a loop.

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{   
    int val,count=0;
    cout<<"Enter a number: ";
    cin>>val;
    cout<<endl;
    
    
    for (int i = 1; i<=val; i++){
      count += i;
    }
    cout<<"Sum of n numbers are: "<<count;
}
