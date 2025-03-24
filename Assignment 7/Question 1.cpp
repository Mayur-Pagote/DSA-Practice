// Write a function to print squares of first n natural numbers, taking n as
// argument to the function

#include <iostream>
using namespace std;

void natural_sq(int n){
  for (int i = 1; i<=n; i++){
    cout<<i*i<<endl;    
  }
}

int main() 
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    
    natural_sq(num);
    
    
}
