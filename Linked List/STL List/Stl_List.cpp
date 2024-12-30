#include<bits/stdc++.h>
using namespace std;
int main(){
//list<int> l(10,5);
list<int>l={1,2,3,4,5};
int a[]={10,20,30};
list<int> l2(a,a+3);
vector<int> v={1,2,3};
list<int>l3(v.begin(),v.end());
//cout<<*l.begin()<<endl;
// for (auto it = l.begin(); it!=l.end(); it++)
// {
//   cout<<*it<<endl;
// }
for(int val: l3){
  cout<<val<<endl;
}
return 0;
}