#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
    }
    reverse(v.begin(),v.end());
    for (const int &x:v)
    {
       cout<<x<<" ";
    }
    
    return 0;
}