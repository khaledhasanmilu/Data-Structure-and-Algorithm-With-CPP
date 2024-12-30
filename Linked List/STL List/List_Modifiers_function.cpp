#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l = {10, 20, 30};
  // list<int> l2;
  // //l2.assign(l.begin(), l.end());
  // l2 = l;
  // l2.push_back(40);
  // l2.push_front(5);
  // l2.pop_back();
  // l2.pop_front();
  // for (int val : l2)
  // {
  //   cout << val << endl;
  // }
l.insert(next(l.begin(),2),100);
for(int val:l){
  cout<<val<<endl;
}
  return 0;
} 