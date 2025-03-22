// Take a floating-point number as input, typecast it into an integer, and print both values.

#include <iostream>
using namespace std;

int main() 
{
    float num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    
    cout<<"Float number is "<<num<<endl;
    cout<<"Int conversion is "<<(int) num;
    
    
    return 0;
    
}
