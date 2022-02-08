#include <bits/stdc++.h>

using namespace std;

int isConnected(vector<vector<int>> &grid, int i, int j)
{
    // grid must be passed by reference to avoid memory limit exceeded error
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size())
        return 0;
    else
        return grid[i][j];
}
int islandPerimeter(vector<vector<int>> &grid)
{
    int res = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 0)
                continue;
            else
            {
                res = res + 4;

                res -= isConnected(grid, i + 1, j);
                res -= isConnected(grid, i - 1, j);
                res -= isConnected(grid, i, j + 1);
                res -= isConnected(grid, i, j - 1);
                // cout<<j<<res<<endl; used for debugging
            }
        }
    }
    return res;
}

int main()
{

    return 0;
}