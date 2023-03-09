#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;


int main()
{
    // 16. count inversion using merge sort
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int i = 0, j = 0, k = 0;
    int temp[n];
    int mid = n / 2;
    while (i < mid and j < n)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
            ans += mid - i;
        }
    }
    while (i < mid)
    {
        temp[k++] = a[i++];
    }
    while (j < n)
    {
        temp[k++] = a[j++];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
    cout << ans;
    
    


    return 0;
}