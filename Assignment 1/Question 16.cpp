#include <iostream>
#include <math.h>
using namespace std;


int main() 
{
    
    float n1, n2, d1, d2;
    float res;
    
    cout<<"Enter numerator1: ";
    cin>>n1;
    cout<<endl;
    
    cout<<"Enter denominator1: ";
    cin>>d1;
    cout<<endl;
    
    cout<<"Enter numerator2: ";
    cin>>n2;
    cout<<endl;
    
    
    cout<<"Enter denominator2: ";
    cin>>d2;
    cout<<endl;
    
    res = ((n1*d2) + (n2*d1)) / (d1*d2);
    
    cout<<"Result is: "<<res;
    
}
