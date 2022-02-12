#include <bits/stdc++.h>

using namespace std;

// optimised solution
int countNegatives(vector<vector<int>> &grid)
{
    int count = 0, m = grid.size(), n = grid[0].size();

    int i = 0, j = n - 1;
    while (i < m && j >= 0)
    {
        if (grid[i][j] < 0)
        {
            count += m - i;
            // cout<<count<<endl;
            j--;
        }
        else
        {
            i++;
        }
    }
    return count;
}

// O(n*n) time complexity or using brute force
int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = grid[i].size() - 1; j >= 0; j--)
        {
            if (grid[i][j] < 0)
                count++;
            else
                break;
        }
    }
    return count;
}

int main()
{

    return 0;
}