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
