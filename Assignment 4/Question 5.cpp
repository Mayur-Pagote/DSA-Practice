// WAP to print the sum of all the even digits of a given number.
// Sample Input: 4556
// Output: 10

#include <iostream>
using namespace std;

int main() 
{
    int count = 0, x = 4556;
    while (x>0){
      if (x%2 == 0){
        count = count + x%10;
      }
      x = x/10;
    }
    cout<<count;
}
