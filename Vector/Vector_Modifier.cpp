#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={1,2,3,2,5,2};
//vector<int> v2={100,200,300,400,500};
// v2 = v;
// v.pop_back();
// v.pop_back();
// v.insert(v.begin()+2,100);
// v.insert(v.begin()+2,v2.begin(),v2.end());
//v.erase(v.begin()+2); 
//v2.erase(v2.begin(),v2.begin()+2); //2 porjonto delete caile porer index porjnto dite hoy
replace(v.begin(),v.end(),2,100);
// for (int i = 0; i < v2.size(); i++)
// {
//   cout<<v2[i]<<" ";
// }
for(int x:v){
  cout<<x<<" ";
}

return 0;
}