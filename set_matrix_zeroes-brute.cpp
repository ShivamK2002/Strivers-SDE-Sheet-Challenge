#include <iostream>
#include <vector>
using namespace std;

void zeroMatrix(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    if (arr[k][j] != 0)
                        arr[k][j] = -1;
                }
                for (int l = 0; l < m; l++)
                {
                    if (arr[i][l] != 0)
                        arr[i][l] = -1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int n = 3;
    int m = 4;
    vector<vector<int>> arr = {{0, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 0, 12}};

    zeroMatrix(arr);
    for (auto row : arr)
    {
        for (auto ele : row)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}