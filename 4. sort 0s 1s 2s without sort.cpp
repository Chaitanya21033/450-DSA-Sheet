#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    //sort 0s 1s 2s without sort
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ones = 0, twos = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    for (int i = 0; i < zeros; i++)
    {
        arr[i] = 0;
    }
    for (int i = zeros; i < zeros + ones; i++)
    {
        arr[i] = 1;
    }
    for (int i = zeros + ones; i < n; i++)
    {
        arr[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
      
    
    return 0;
}