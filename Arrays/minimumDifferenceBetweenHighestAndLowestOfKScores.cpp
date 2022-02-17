#include <bits/stdc++.h>

using namespace std;

int minimumDifference(vector<int> &nums, int k)
{
    if (k == 1)
        return 0;
    sort(nums.begin(), nums.end());
    int diff, ans = nums[nums.size() - 1];
    for (int i = 0; i <= nums.size() - k; i++)
    {
        diff = nums[i + k - 1] - nums[i];
        ans = min(ans, diff);
    }
    return ans;
}

int main()
{

    return 0;
}