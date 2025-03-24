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
      for (int j = (n-i); j >= 1; j--){
        cout<<" ";
      }
      for (int k = 0; k < i; k++){
        cout<<(char)(65+k);
      }
      cout<<endl;
    }
}
