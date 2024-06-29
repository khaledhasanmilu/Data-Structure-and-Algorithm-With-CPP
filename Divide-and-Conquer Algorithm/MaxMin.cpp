/*
Write a program that does the following -->
(i) take N numbers as input and store them in an array A.
(ii)write a function findMaxMin that returns the maximum and minimum elements of an array using divide and conquer.
(iii) use the function findMaxMin to print the maximum and minimum elements of the array A.
*/
#include <iostream>
#include <utility> // For std::pair

using namespace std;

pair<int, int> findMaxMin(int a[], int i, int j) {
    // Base case: if there's only one element
    if (i == j) {
        return pair<int, int>(a[i], a[i]);
    }

    // Divide
    int mid = (i + j) / 2;
    pair<int, int> left = findMaxMin(a, i, mid);
    pair<int, int> right = findMaxMin(a, mid + 1, j);

    // Combine
    pair<int, int> ret;
    ret.first = max(left.first, right.first);  // Maximum of left and right
    ret.second = min(left.second, right.second);  // Minimum of left and right

    return ret;
}

int main() {
    int a[100];
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array values: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<int, int> ret = findMaxMin(a, 0, n - 1);
    cout << "Maximum element: " << ret.first << ", Minimum element: " << ret.second << endl;

    return 0;
}


/* Another way for solve.
#include <iostream>

using namespace std;

pair<int, int> findMaxMin(int a[], int i, int j){
    //Base Case
    if(i == j){
        return pair<int, int>(a[i], a[i]);

    }

    // Divide
    int mid = (i+j)/2;
    pair<int, int> left = findMaxMin(a, i, mid);
    pair<int, int> right = findMaxMin(a, mid+1, j);
    //----------------------------------------------

    // Combine
    pair<int, int> ret;
    if(left.first > right.first) ret.first = left.first;
    else ret.first = right.first;

    if(left.second < right.second) ret.second = left.second;
    else ret.second = right.second;

    return ret;

}

int main(){
    int a[100];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    pair<int, int> ret = findMaxMin(a, 0, n-1);
    cout <<  ret.first << " " << ret.second << endl;


    return 0;
}

*/