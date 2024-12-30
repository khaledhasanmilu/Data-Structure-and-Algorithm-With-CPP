#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> l = {10,20,30};

cout<<"Tail: "<<l.back()<<endl;//access the tail element
cout<<"Head: "<<l.front()<<endl;
cout<<"ith value access "<< *next(l.begin(),1)<<endl; //pointer return so we need to dereffernce
for(int val:l){
  cout<<val<<endl;
}
return 0;
}