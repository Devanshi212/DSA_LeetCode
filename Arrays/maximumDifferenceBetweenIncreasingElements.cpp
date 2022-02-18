#include <bits/stdc++.h>

using namespace std;

int maximumDifference(vector<int> &nums)
{
    int diff, ans = nums[1] - nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] > nums[i])
            {
                diff = nums[j] - nums[i];
                ans = max(ans, diff);
            }
        }
    }
    if (ans <= 0)
        return -1;
    return ans;
}

int main()
{

    return 0;
}