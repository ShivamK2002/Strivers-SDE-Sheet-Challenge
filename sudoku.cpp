#include <bits/stdc++.h>
bool isSafe(vector<vector<int>> &matrix, int row, int col, int val)
{
    for (int i = 0; i < 9; i++)
    {
        if (matrix[row][i] == val)
        {
            return false;
        }
        if (matrix[i][col] == val)
        {
            return false;
        }
        if (matrix[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
        {
            return false;
        }
    }

    return true;
}

bool isItSudoku(vector<vector<int>> &matrix)
{
    int n = 9;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int val = 1; val <= 9; val++)
                {
                    if (isSafe(matrix, i, j, val))
                    {
                        matrix[i][j] = val;
                        if (isItSudoku(matrix))
                            return true;
                        else
                        {
                            matrix[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }

    return true;
}

void solveSudoku(vector<vector<int>> &sudoku)
{
    isItSudoku(sudoku);
}