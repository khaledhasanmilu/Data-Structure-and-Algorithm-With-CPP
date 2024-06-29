/*Write a function binary_search that finds the index of an element X in a sorted (ascending) array A of N integers using divide and conquer.
 If the element X is not present in the array, return -1.*/
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> arr, int i, int j, int value)
{
  int mid = (i + j) / 2;
  if (arr[mid] == value)
  {
    return mid;
  }
  if (i >= j)
  {
    return -1;
  }

  else
  {
    if (arr[mid] > value)
    {
      return BinarySearch(arr, i, mid, value);
    }
    else
    {
      return BinarySearch(arr, mid + 1, j, value);
    }
  }
}
int main()
{
  vector<int> arr = {1, 5, 2, 9, 6, 7, 0, 4};
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }
  
  int result = BinarySearch(arr, 0, arr.size() - 1, 9);
  cout << "Your Search Result In " << result << endl;

  return 0;
}