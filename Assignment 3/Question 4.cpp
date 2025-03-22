// Display this GP - 3,12,48,.. upto ‘n’ terms

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{   
    int n, an;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i<=n; i++){
      an = 3 * pow(4, i - 1);
      cout<<an<<endl;
    }
}
