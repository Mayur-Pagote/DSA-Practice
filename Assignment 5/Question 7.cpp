// Print the following pattern
// Sample Input: n= 4

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i<= n; i++){
      for (int j = 1; j <= i; j++){
        cout<<j<<" ";
      }
      cout<<endl;
    }
}
