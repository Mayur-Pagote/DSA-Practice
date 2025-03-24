// Print the following pattern
// Input: n = 4

#include <iostream>
using namespace std;

int main() 
{   
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i <= n; i++){
      for (int j = (n-i); j>=1; j--){
        cout<<" ";
      }
      for (int k = 1; k <= i; k++){
        cout<<"*";
      }
      cout<<endl;
    }
    
    for (int l = 1; l <= (n-1); l++){
      for (int m = 1; m <= l; m++){
        cout<<" ";
      }
      for (int b = (n-l); b>=1; b--){
        cout<<"*";
      }
      cout<<endl;
    }
}
