#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Check if the vector is empty
    if (v.empty()) {
        cout << "The vector is empty!" << endl;
    } else {
        cout << "The vector is not empty!" << endl;
    }

    // Add an element
    v.push_back(10);

    // Check again
    if (v.empty()) {
        cout << "The vector is empty!" << endl;
    } else {
        cout << "The vector is not empty!" << endl;
    }

    return 0;
}
