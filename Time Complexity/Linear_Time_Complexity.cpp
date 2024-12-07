#include<iostream>
int main(){
  int n;
  cin>>n;
	int sum = 0;
  for(int i=0;i<n;i++){  //o(n)---time complexity
    sum = sum+i;
  }
	cout<<sum<<endl;
}
