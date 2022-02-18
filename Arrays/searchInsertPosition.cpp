#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int l = 0, h = nums.size() - 1, m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (target > nums[m])
            l = m + 1;
        if (target < nums[m])
            h = m - 1;
        if (target == nums[m])
            return m;
    }
    return l;
}

int main()
{

    return 0;
}