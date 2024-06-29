//Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of the even numbers of an array of n integers. //  
#include <bits/stdc++.h>
using namespace std;
int OddFinder(vector<int> arr, int i, int j)
{
  int mid;
  mid = (i + j) / 2;
  if (i == j)
  {
    if (arr[i] % 2 == 0) //--even sum.            // arr[i] % 2 != 0--->odd sum
    {
      return arr[i];
    }
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
  vector<int> arr = {1, 8, 2, 3, 5, 0, 0, 5};
  int result = OddFinder(arr, 0, arr.size());
  cout << "Sum Of Even :" << result << endl;
  return 0;
}