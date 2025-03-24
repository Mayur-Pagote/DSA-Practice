// Given two numbers a and b, write a function to print all odd numbers between them.

#include <iostream>
using namespace std;

void num_range(int num1, int num2){
    for(int i = num1; i<=num2; i++){
      cout<<i<<endl;
    }
}


int main() 
{
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<endl;
    
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<endl;
    
    num_range(num1, num2);
    
}
