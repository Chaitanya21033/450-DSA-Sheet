#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;


int main()
{
    // 15. next permutation
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int i = n - 2;
    while (i >= 0 and nums[i] >= nums[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        int j = n - 1;
        while (j >= 0 and nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}