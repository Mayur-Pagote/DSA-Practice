// Write a program to find the sum of squares of first n natural numbers where n
//will be provided by the user.

#include <iostream>
#include <math.h>
using namespace std;


int main() 
{
    
    int num, count;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    
    for(int i=1; i<=num; i++){
      count = count + (i*i);
    }
    
    cout<<"Sum of squares till n is: "<<count;
    
}
