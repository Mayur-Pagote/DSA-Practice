// Reverse a given integer number
// Input: 76542
// Output: 24567

#include <iostream>
using namespace std;

int main() 
{
    int num, temp=0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    
    while (num>0){
      temp *= 10;
      temp += num%10;
      num /= 10;
    }
    cout<<temp;
}
