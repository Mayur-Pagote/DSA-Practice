// Display this AP - 4,7,10,13,16.. upto ‘n’ terms

#include <iostream>
using namespace std;

int main() 
{   
    int n, an;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i<=n; i++){
      an = 4 + (i-1)*3;
      cout<<an<<endl;
    }
}
