// Write a program that will take 2 numbers as input and prints the LCM and HCF
// of those 2 numbers.

#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, hcf, lcm;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    for (int i = 1; i <= min(num1, num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    lcm = (num1 * num2) / hcf;
    
    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
