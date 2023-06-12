bool searchMatrix(vector<vector<int>> &mat, int target)
{
    for (auto i : mat)
    {
        for (auto ele : i)
        {
            if (ele == target)
                return true;
        }
    }

    return false;
}