#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

bool check(vector<int> &a, vector<int> &b)
{
    return min(a[1], b[1]) - max(a[0], b[0]) >= 0;
}
vector<int> mer(vector<int> &a, vector<int> &b)
{
    return {min(a[0], b[0]), max(a[1], b[1])};
}

int main()
{
    // 14. merge intervals
    int n;
    cin >> n;
    vector<vector<int>> inv;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        inv.push_back({a, b});
    }
    vector<vector<int>> v;
    int i = 0;
    sort(inv.begin(), inv.end());
    while (i < n)
    {
        vector<int> curr = inv[i++];
        vector<int> merge = curr;
        while (i < n and check(curr, inv[i]))
        {
            merge = mer(curr, inv[i]);
            curr = merge;
            i++;
        }
        v.push_back(merge);
    }
    return 0;
}