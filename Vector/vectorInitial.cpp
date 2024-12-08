#include <bits/stdc++.h>
using namespace std;
int main()
{
  // vector<int> v; //type-1
  // vector<int> v(10); //type-02
  // vector<int> v(10,1); //type 4
  // vector<int> v2 (v); //copy value v to v2  and type -5
  int a[5] = {1, 2, 3, 4, 5};
  // vector<int> v(a,a+5); //type -6
  vector<int> v = {1, 2, 3, 4};
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  // cout<<v.size()<<endl;
  return 0;
}