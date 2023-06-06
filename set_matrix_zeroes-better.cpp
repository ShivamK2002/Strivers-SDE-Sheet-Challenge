class Solution
{
public:
    void setZeroes(vector<vector<int>> &arr)
    {
        {
            int n = arr.size();
            int m = arr[0].size();
            vector<int> rowTracker(n, 1);
            vector<int> colTracker(m, 1);
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        rowTracker[i] = 0;
                        colTracker[j] = 0;
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (rowTracker[i] == 0 || colTracker[j] == 0)
                    {
                        arr[i][j] = 0;
                    }
                }
            }
        }
    }
};