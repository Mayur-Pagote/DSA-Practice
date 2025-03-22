// Take an integer between 65 and 90 as input and print its corresponding uppercase letter.

#include <iostream>
using namespace std;

int main() 
{
    int char_num;
    cout<<"Enter a number between 65 to 90: ";
    cin>>char_num;
    cout<<endl;
    
    cout<<"Corresponding uppercase letter is: "<<(char)char_num;
    
    return 0;
    
}
