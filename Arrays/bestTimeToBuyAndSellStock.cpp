#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProf = 0, prof, buy = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < buy)
            buy = prices[i];
        prof = prices[i] - buy;
        maxProf = max(maxProf, prof);
    }
    return maxProf;
}

int main()
{

    return 0;
}