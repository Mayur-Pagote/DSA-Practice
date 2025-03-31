#include <iostream>
using namespace std;

int main() 
{
    int n, count = 1;;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for(int i = n; i>=1; i--){
      for (int j = i; j>1; j--){
        cout<<" ";
      }
      for (int k = 1; k <= count; k++){
        cout<<(char)(k+64);
      }
      cout<<endl;
      count += 2;
    }
}
