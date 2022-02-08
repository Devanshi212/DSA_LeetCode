#include <bits/stdc++.h>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int sum, res = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            sum = sum + accounts[i][j];
        }
        res = max(res, sum);
    }
    return res;
}

int main()
{

    return 0;
}