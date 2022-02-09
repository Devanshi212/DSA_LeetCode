#include <bits/stdc++.h>

using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    int res = 0;
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) == m.end())
            m[nums[i]] = 1;
        else
            m[nums[i]]++;
    }
    for (auto x : m)
        res = res + (x.second * (x.second - 1)) / 2;
    return res;
}

int main()
{

    return 0;
}