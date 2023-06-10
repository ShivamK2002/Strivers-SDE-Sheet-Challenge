#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int duplicate = -1;
    int miss = -1;
    for (auto i : mpp)
    {
        if (i.second > 1)
        {
            duplicate = i.first;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!(mpp.find(i) != mpp.end()))
        {
            miss = i;
            break;
        }
    }
    return {miss, duplicate};
}
