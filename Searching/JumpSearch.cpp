#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int n, int x) {
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }
    for (int i = prev; i < min(step, n); i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = jumpSearch(arr, n, x);
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
    return 0;
}
