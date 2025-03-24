// Print the following pattern
// Sample Input: m = 4, n = 6

#include <iostream>
using namespace std;

int main() 
{   
    int m;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<endl;
    
    int n;
    cout<<"Enter columns: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i <= m; i++){
      if (i == 1 or i == m){
        for(int j = 1; j <= n; j++){
          cout<<"*";
        }
        cout<<endl;
      }
      else {
        for(int k = 1; k <= n; k++){
          if (k == 1 or k == n){
          cout<<"*";
          }
          else {
            cout<<" ";
          }
        }
        cout<<endl;
      }
    }
}
