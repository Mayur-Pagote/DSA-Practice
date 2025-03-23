// Print all the Armstrong numbers in a given range.Range will be provided by the user
// Armstrong number is a number that is equal to the sum of cubes of its digits. For example
// 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <iostream>
using namespace std;

int main() 
{
    int num,cc, value = 0;
    
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    int temp = num;
    
    while (num>0){
      cc = num%10;
      cc = cc*cc*cc;
      value += cc;
      
      num /= 10;
      
    }
    if (temp == value) cout<<"Number is Armstrong";
    else cout<<"Number is not Armstrong";
}
