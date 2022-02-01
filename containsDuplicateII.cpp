#include <bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    map<int, int> m;
    map<int, int> index;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) == m.end())
        {
            m[nums[i]] = 1;
            index[nums[i]] = i;
        }
        else
        {
            if (abs(index[nums[i]] - i) <= k)
                return true;
            else
                index[nums[i]] = i;
        }
    }
    return false;
}

int main()
{

    return 0;
}