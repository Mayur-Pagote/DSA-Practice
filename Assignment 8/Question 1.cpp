#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20, c;
    int* ptr1 = &a;
    int* ptr2 = &b;
    c = *ptr1 * *ptr2;
    cout<<c;
}
