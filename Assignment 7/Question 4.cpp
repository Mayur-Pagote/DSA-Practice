// Write a function to count the number of digits in a number and then print the
// square of this number.

#include <iostream>
using namespace std;

void count_digit_sq(int num){
    int count=0;
    while (num>0){
      count += 1;
      num /= 10;
    }
    cout<<"Total digits are: "<<count<<endl;
    cout<<"Square is: "<<count*count;
    
}


int main() 
{
    int num;
    cout<<"Enter first number: ";
    cin>>num;
    cout<<endl;
    count_digit_sq(num);
}
