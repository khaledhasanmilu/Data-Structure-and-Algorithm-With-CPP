#include<bits/stdc++.h>
using namespace std;
int main()
{
   queue<int> q;
   q.push(10);
    if (!q.empty())
    {
        q.pop();
    }
  int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    int val;
    cin>>val;
    q.push(val);
   }
   while (!q.empty())
   {
    cout<<q.front();
    q.pop();
    if (!q.empty())         //this is for print those value which after tail is not any space.
    {
        cout<<" ";
    }
    
   }
   return 0;
}