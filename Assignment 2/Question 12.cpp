// 12. Write a menu-driven program.
// a) Cm to ft
// b) Km to miles
// c) USD to INR
// d) Exit

#include <iostream>
using namespace std;

int main() 
{   char inp;
    cout<<"a). Choose any one: ";
    cout<<"b). CM to ft";
    cout<<"c). USD to INR";
    cout<<"d). Exit";
    
    while (true) {
      cout<<"Enter any option: ";
      cin>>inp;
      cout<<endl;
      
      if (inp == 'd') break;
      
      else if (inp == 'a') {
        float CM, ft;
        cout<<"Enter length in CM: ";
        cin>>CM;
        cout<<endl;
        ft = CM/30;
        cout<<"Conversion of CM to ft is: "<<ft;
        cout<<endl;
      }
      
      else if (inp == 'b') { 
        float KM, miles;
        cout<<"Enter length in KM: ";
        cin>>KM;
        cout<<endl;
        miles = KM/1.609;
        cout<<"Conversion of KM to miles is: "<<miles;
        cout<<endl;
      }
      
      else if (inp == 'c') {
        float usd, inr;
        cout<<"Enter USD: ";
        cin>>usd;
        cout<<endl;
        inr = usd * 82;
        cout<<"Conversion of USD to inr is: "<<inr;
      }
      
      else cout<<"Invalid Input.";
      
    }
}
