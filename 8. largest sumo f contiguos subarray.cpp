#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    //largest sum of contiguous subarray
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curMax = 0, maxTillNow = INT_MIN;
        for(auto c : arr)
            curMax = max(c, curMax + c),
            maxTillNow = max(maxTillNow, curMax);
    cout<< maxTillNow;


    return 0;
}