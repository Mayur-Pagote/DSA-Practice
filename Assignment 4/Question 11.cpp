// Display Fibonacci series up to 10 terms.

#include <iostream>
using namespace std;

int main() 
{
    int num1 = 0, num2 = 1, next;
    cout<<num1<<" "<<num2<<" ";
    
    for (int i=1; i<=10; i++){
      next = num1 + num2;
      cout<<next<<" ";
      num1 = num2;
      num2 = next;
    }
}
