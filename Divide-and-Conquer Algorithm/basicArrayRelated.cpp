/*
Normal Basic for  array input output and 
using function calling for sorting.
*/
#include<bits/stdc++.h>
using namespace std;
void SortArray(int arr[],int n){
  sort(arr,arr+n);
  cout<<"After Sorting The Array: ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}
int main(){
int n;
cout<<"Enter Element: ";
cin>>n;
int arr[100];
cout<<"Enter " << n << " array Value :";
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}
cout<<"Array: ";
for (int i = 0; i < n; i++)
{
  cout<<arr[i] <<" ";
}
cout<<endl;
SortArray(arr,n);

return 0;
}