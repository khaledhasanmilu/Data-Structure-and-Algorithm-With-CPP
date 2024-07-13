#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 1, 25, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, greater<int>());
    //First of all we want make the array to be sorted(Descending Order).
    cout << "Sorted(Descending) Availabe coin: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout<<endl;

    int make_change;
    cout<<"Enter your Change value: ";
    cin>>make_change;
    int min_coin = 0;
    int i = 0;

    while (make_change > 0)
    {
        if (arr[i] <= make_change)
        {
            int x = make_change / arr[i];
            min_coin += x;
            make_change -= x * arr[i];
        }
        i++;
    }
    cout << "Minimum Coin For change: " << min_coin << endl;
}