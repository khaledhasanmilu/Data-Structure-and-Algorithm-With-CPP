//Write a function print_odd using divide-and-conquer algorithm to print the odd numbers of an array of n integers. 
#include <bits/stdc++.h>
using namespace std;
int OddFinder(vector<int> arr, int i, int j)
{
  int mid;
    mid = (i + j) / 2;
  if (i == j)
  {
    return i % 2!=0; //odd
   // return i % 2==0; //even
    
  }
  else
  {
    int left = OddFinder(arr, i, mid);
    int right = OddFinder(arr, mid + 1, j);
    return left + right;
  }
}
int main()
{
  vector<int> arr = {1, 8, 2, 3, 5, 0, 0,5};
  int result = OddFinder(arr, 0, arr.size());
  cout << "Total Odd :" << result << endl;
  return 0;
}