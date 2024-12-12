#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n), C;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    C.insert(C.end(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}