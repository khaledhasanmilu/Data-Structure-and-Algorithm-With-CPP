#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i *= 2) { // Loop doubles the value of i in each step
        cout << "Step: " << count++ << endl;
    }
    return 0;
}
