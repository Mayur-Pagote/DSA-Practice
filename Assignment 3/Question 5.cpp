// Write a program to print all the ASCII values and their equivalent
// characters of 26 alphabets using a while loop

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{   
    int val = 65;
    
    for (int i = 0; i<=25; i++){
      cout<<val+i<<" "<<(char)(val+i)<<endl;
    }
}
