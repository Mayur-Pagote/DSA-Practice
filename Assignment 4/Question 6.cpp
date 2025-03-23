// WAP to print the sum of a given number and its reverse.
// Sample Input: 12
// Sample Output: 33 [12+21]

#include <iostream>
using namespace std;

int main() 
{
    int count = 0, x = 12;
    int y = x;
    while (x>0){
      count *= 10;
      count = count + x%10;
      x = x/10;
    }
    cout<<count+y;
}
