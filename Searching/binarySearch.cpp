#include <bits/stdc++.h>
using namespace std;
void binSearch(vector<int> vr, int i, int j, int value)
{
  if (i >= j)
  {
    cout << "Not Found";
    return;
  }

  int mid = (i + j) / 2;

  if (vr[mid] == value)
  {
    cout << "Found at index: "<<mid;
  }
  else if (vr[mid] > value)
  {
    binSearch(vr, i, mid, value);
  }

  else
  {
    binSearch(vr, mid + 1, j, value);
  }
}
int main()
{
  vector<int> vr = {3, 5, 7, 1, 9, 4};
  sort(vr.begin(), vr.end());
  cout << "After Sorting: ";
  for (int i = 0; i < vr.size(); i++)
  {
    cout << vr[i] << " ";
  }
  cout<<endl;
  binSearch(vr, 0, vr.size(), 4);
  // cout << "Found value at Index: " << result;
  return 0;
}