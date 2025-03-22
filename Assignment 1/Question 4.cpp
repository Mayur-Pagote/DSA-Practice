//Take input of principle, time and rate and find the simple interest

#include <iostream>
using namespace std;

int main() 
{
    double p, r, t, si;
    cout<<"Enter principle: ";
    cin>>p;
    cout<<endl;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<endl;
    cout<<"Enter time: ";
    cin>>t;
    cout<<endl;
    
    si = (p*r*t)/100;
    
    cout<<"Simple interest is: "<<si;
    
    
    return 0;
    
}
