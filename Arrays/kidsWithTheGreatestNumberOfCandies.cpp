#include <bits/stdc++.h>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int max = *max_element(candies.begin(), candies.end());
    vector<bool> res;
    for (auto x : candies)
    {
        res.push_back(x + extraCandies >= max);
    }
    return res;
}

int main()
{

    return 0;
}