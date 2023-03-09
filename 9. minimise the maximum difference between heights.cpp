#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    // minimise the maximum difference between 2 elements in the array by either increaseing or decreasing height of every element by k
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
    int ans = arr[n - 1] - arr[0];
    int small = arr[0] + k;
    int big = arr[n - 1] - k;
    if (small > big)
    {
        swap(small, big);
    }
    for (int i = 1; i < n - 1; i++)
    {
        int subtract = arr[i] - k;
        int add = arr[i] + k;
        if (subtract >= small || add <= big)
        {
            continue;
        }
        if (big - subtract <= add - small)
        {
            small = subtract;
        }
        else
        {
            big = add;
        }
    }
    cout << min(ans, big - small);
    cout << endl;
    // time complexity: O(nlogn) because of sorting
    // space complexity: O(1) because of no extra space used

    return 0;
}