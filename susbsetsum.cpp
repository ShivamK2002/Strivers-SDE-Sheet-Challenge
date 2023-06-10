#include <bits/stdc++.h>

void solve(int index, vector<int> &num, vector<int> &ans, int val)
{
    if (index == num.size())
    {
        ans.push_back(val);
        return;
    }
    solve(index + 1, num, ans, val + num[index]);
    solve(index + 1, num, ans, val);
}
vector<int> subsetSum(vector<int> &num)
{
    int index = 0;
    int val = 0;
    vector<int> ans;
    solve(index, num, ans, val);
    sort(ans.begin(), ans.end());
    return ans;
}