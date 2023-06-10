#include <bits/stdc++.h>
bool solveUsingRec(int index, int n, int k, vector<int> &arr)
{
    if (k == 0)
        return 1;
    if (index >= n)
        return false;
    bool include = false;
    if (k >= arr[index])
        include = solveUsingRec(index + 1, n, k - arr[index], arr);
    bool exclude = solveUsingRec(index + 1, n, k, arr);

    return include || exclude;
}
bool solveUsingMem(int index, int n, int k, vector<int> &arr, vector<vector<int>> &dp)
{
    if (k == 0)
        return 1;
    if (index >= n)
        return false;
    if (dp[index][k] != -1)
        return dp[index][k];
    bool include = false;
    if (k >= arr[index])
        include = solveUsingMem(index + 1, n, k - arr[index], arr, dp);
    bool exclude = solveUsingMem(index + 1, n, k, arr, dp);

    dp[index][k] = include || exclude;
    return dp[index][k];
}
bool solveUsingTab(int index, int n, int target, vector<int> &nums)
{

    vector<vector<int>> dp(nums.size() + 1, vector<int>(target + 1, 0));
    for (int i = 0; i < nums.size(); i++)
    {
        dp[i][0] = 1;
    }
    for (int index = n - 1; index >= 0; index--)
    {
        for (int t = 1; t <= target; t++)
        {
            bool include = 0;
            if (t - nums[index] >= 0)
                include = dp[index + 1][t - nums[index]];
            bool exclude = dp[index + 1][t];
            dp[index][t] = (include || exclude);
        }
    }

    //   for(int i=1; i<=k;i++){
    //     for(int j=0; j<n;j++){
    //       bool include=false;
    // if(k>=arr[index])  include = dp[k-arr[i]][j+1];
    //     bool exclude =  dp[i][+1];

    //   dp[i][j] = include || exclude;
    //     return dp[i][j] ;

    //     }
    // }
    return dp[0][target];
}
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    int index = 0;

    // bool ans = solveUsingRec(index,n,k,arr);
    // vector<vector<int>>dp(n,vector<int>(k+1,-1));
    // bool ans =solveUsingMem(index,n,k,arr,dp);
    bool ans = solveUsingTab(index, n, k, arr);
    return ans;
}