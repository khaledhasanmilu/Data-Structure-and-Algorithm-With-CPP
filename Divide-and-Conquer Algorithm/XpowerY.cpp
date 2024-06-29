/*Write a program that takes X and Y as input and
calculates the value of X^Y using divide and conquer and prints it. */
#include <bits/stdc++.h>
using namespace std;
long int xPowery(int X, int Y)
{
  if (Y == 0)
  {
    return 1;
  }
  if (Y == 1)
  {
    return X;
  }
  int c1 = xPowery(X, Y / 2);
  int c2 = xPowery(X, Y / 2);

  if (Y % 2 == 0)
  {
    return c1 * c2;
  }
  else
    return c1 * c2 * X;
}
int main()
{
  int X, Y;
  cin >> X >> Y;
  long int result = xPowery(X, Y);
  cout << "The Result: " << result << endl;
  return 0;
}