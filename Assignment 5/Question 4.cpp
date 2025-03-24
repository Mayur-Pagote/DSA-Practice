// Print the following pattern
// Input n = 4

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i <= n; i++){
      for (int k = 1; k <= i; k++){
      cout<<"*";
      }
      cout<<endl;
    }
    
    for (int j = (n-1); j >= 1; j--){
      for (int l = j; l >= 1; l--){
        cout<<"*";
      }
      cout<<endl;
    }
}
