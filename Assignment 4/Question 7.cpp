// Print the factorials of first ‘n’ numbers Sample
// Input: 10

#include <iostream>
using namespace std;

int main() 
{
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i=1; i<=n; i++){
      int count = 1;
      for (int j=1; j<=i; j++){
        count *= j;
      }
      cout<<count<<endl;
    }
}
