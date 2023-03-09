#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    // 12. merge 2 sorted arrays without extra space
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, k = n - 1;
    while (i <= k && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            swap(a[k], b[j]);
            k--;
            j++;
        }
    }
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}