#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {           // Outer loop
        for (int j = 0; j < n; ++j) {       // Inner loop
            cout << "(" << i << ", " << j << ")" << endl;
        }
    }
    return 0;
}
