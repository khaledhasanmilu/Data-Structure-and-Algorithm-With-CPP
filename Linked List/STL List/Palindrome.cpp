#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> doubLik;
    int value;

    while (cin >> value && value != -1) {
        doubLik.push_back(value);
    }

    auto front = doubLik.begin();
    auto back = --doubLik.end();
    bool isPalindrome = true;

    while (front != back && next(front) != back) {
        if (*front != *back) {
            isPalindrome = false;
            break;
        }
        ++front;
        --back;
    }

    if (isPalindrome) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
