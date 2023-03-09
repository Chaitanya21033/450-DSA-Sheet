#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    //1. reverse the array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}