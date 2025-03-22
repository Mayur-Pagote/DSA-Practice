//Write a program that will tell the number of dogs and chicken are there when the
//user will provide the value of total heads and legs.
//For example:
//Input: heads -> 4 legs -> 12
//Output: dogs -> 2 chicken -> 2

#include <iostream>
#include <math.h>
using namespace std;


int main() 
{
    
    int leg, head,c,d;
    cout<<"Enter head: ";
    cin>>head;
    cout<<endl;
    
    cout<<"Enter leg: ";
    cin>>leg;
    cout<<endl;
    
    c = (2*head-0.5*leg);
    d = 4-c;
    
    cout<<c<<d;
    
}
