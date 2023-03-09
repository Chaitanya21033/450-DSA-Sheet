#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    // minimum number of jumps to reach end
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    for (int i = 1; i < n; ++i)
    {
        nums[i] = max(nums[i - 1], i + nums[i]);
    }
    int jumps = 0;
    for (int at = 0; at < n - 1; at = nums[at])
    {
        jumps++;
    }
    cout << jumps << endl;
    // time complexity: O(n)
    // space complexity: O(1)

    return 0;
}