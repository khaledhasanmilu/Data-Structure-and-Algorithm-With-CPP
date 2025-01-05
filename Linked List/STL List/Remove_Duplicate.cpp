#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ll;
    int value;

    while (cin >> value && value != -1) {
        ll.push_back(value);
    }

    ll.sort();
    ll.unique();

    for (int num : ll) {
        cout << num << " ";
    }

    return 0;
}
