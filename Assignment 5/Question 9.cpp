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
      for (int j = i; j >= 1; j--){
        cout<<j;
      }
      cout<<endl;
    }
}
