#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    // 11. find duplicate in an array of n+1
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int a = 1;
    int b = nums[0];
    for (int i = 2; i <= nums.size() - 1; i++)
        a ^= i;
    for (int i = 1; i < nums.size(); i++)
        b ^= nums[i];
    cout << (a ^ b) << endl;

    return 0;
}