int solveUsingMem(vector<int> &weights, vector<int> &values, int index, int capacity, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        if (weights[0] <= capacity)
        {
            return values[0];
        }
        else
        {
            return 0;
        }
    }

    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }

    int include = 0;
    if (weights[index] <= capacity)
    {
        include = values[index] + solveUsingMem(weights, values, index - 1, capacity - weights[index], dp);
    }

    int exclude = solveUsingMem(weights, values, index - 1, capacity, dp);
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    vector<vector<int>> dp(n, vector<int>(w + 1, -1));
    int ans = solveUsingMem(weights, values, n - 1, w, dp);
    return ans;
}