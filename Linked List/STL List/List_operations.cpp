#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
  // l.sort(); //ascending order
  l.sort(greater<int>());
  for (int val : l)
  {
    cout << val << " ";
  }
  cout<<endl;
  l.unique(); // print only value in one time and it will be work in sorted list
  cout << "Uniqe" << endl;
  for (int val : l)
  {
    cout << val << " ";
  }
  cout<<endl;
  l.reverse();
  cout << "Reverse:" << " ";
cout<<endl;
  for (int val : l)
  {
    cout << val << " ";
  }

  return 0;
}