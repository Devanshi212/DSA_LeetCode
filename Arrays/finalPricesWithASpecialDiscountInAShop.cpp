#include <bits/stdc++.h>

using namespace std;

vector<int> finalPrices(vector<int> &prices)
{
    vector<int> ans(prices.size(), -1);
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] <= prices[i])
            {
                ans[i] = prices[i] - prices[j];
                break;
            }
        }
        if (ans[i] == -1)
            ans[i] = prices[i];
    }
    return ans;
}

int main()
{

    return 0;
}