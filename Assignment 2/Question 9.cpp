// Write a C++ program to input any character and check whether it is the alphabet,
// digit or special character.

#include <iostream>
using namespace std;

int main() 
{
    char c;
    cout<<"Enter something: ";
    cin>>c;
    cout<<endl;
    
    if (isdigit(c)) cout<<"Number";
    else if (isalpha(c)) cout<<"Alphabet";
    else cout<<"Special Symbol";
}
