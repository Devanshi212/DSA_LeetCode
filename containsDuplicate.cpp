#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) == m.end())
            m[nums[i]] = 1;
        else
            m[nums[i]]++;
        if (m[nums[i]] == 2)
            return true;
    }
    return false;
}

int main()
{

    return 0;
}