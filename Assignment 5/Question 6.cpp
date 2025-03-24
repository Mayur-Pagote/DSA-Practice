// Print the following pattern
// Sample Input: n = 4

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i =1; i<=n; i++){
      for (int j = (n-i); j > 0; j--){
        cout<<" ";
      }
      for (int k=1; k<=n; k++){
        cout<<"*";
      }
      cout<<endl;
    }
}
