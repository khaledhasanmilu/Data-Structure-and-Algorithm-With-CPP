/* Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of an array of n integers.   */
#include<bits/stdc++.h>
using namespace std;
int SumArr(vector<int> arr,int i,int j){
int mid = (i+j)/2;
if (i==j)
{
  return arr[i];
}
int c1 = SumArr(arr,i,mid);
int c2 = SumArr(arr,mid+1,j);
return c1+c2;

}
int main(){
vector<int> arr ={5,7,1,2,8,3,0,7};
int result = SumArr(arr,0,arr.size()-1);
cout<<"Total Sum :"<<result<<endl;
return 0;
}