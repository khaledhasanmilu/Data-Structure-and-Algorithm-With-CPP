#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l = {1, 2, 3};
  vector<int> v = {10, 20, 30};
  list<int> l2(v.begin(), v.end());
  // cout<<l.max_size()<<endl;//max size
  //  l2.clear();  //clear full list

  // cout<<l2.size()<<endl;
  if (l2.empty())
  {
    cout << "Empty" << endl;
  }
  l2.resize(5, 100); // total list size will be 5 and others two value is 100
  for (int val : l2)
  {
    cout << val << endl;
  }
  return 0;
}