// kadane's algorithm
#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int max_so_far = 0, max_ending = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending = max_ending + nums[i];
        if (max_ending > max_so_far)
            max_so_far = max_ending;
        if (max_ending < 0)
            max_ending = 0;
    }
    if (max_so_far == 0)
        return *max_element(nums.begin(), nums.end());
    return max_so_far;
}

int main()
{

    return 0;
}