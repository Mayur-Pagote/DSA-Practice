#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int b = 5;
  int c = a += b -= 2;
  cout << a << " " << b << " " << c;
  return 0;
}
