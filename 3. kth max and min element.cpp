#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    // find kth max and min element in the array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    sort(arr, arr + n);
    cout << "kth max element is " << arr[n - k] << endl;
    cout << "kth min element is " << arr[k - 1] << endl;
    
    
    return 0;
}