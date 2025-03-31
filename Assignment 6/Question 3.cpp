#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout<<endl;
    int count = n;

    for (int i = 0; i < n; i++) {
        for (int k = (count-1); k>=1; k--){
          cout<<" ";
        }
        for (char ch = 'A' + i; ch >= 'A'; ch--) {
            cout << ch;
        }
        
        for (char ch = 'B'; ch <= 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
        count -= 1;
    }
    
    return 0;
}
