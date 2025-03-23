// Find the sum of the series upto n terms.
// Write a program to calculate the sum of series up to n term. For example, if n =5
// the series will become 2 + 22 + 222 + 2222 + 22222 = 24690. Take the user input
// and then calculate. And the output style should match which is given in the
// Example. Input: 5
// Output: Sum of above series is: 24690

#include <iostream>
using namespace std;

int main() 
{
    int n, count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i<=n; i++){
      int value = 0;
      for (int j = 1; j<= i; j++){
        value *= 10;
        value += 2;
      }
      count += value;
    }
    cout<<count;
}
