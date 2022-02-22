#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

vector<int> sortedSquares(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] *= nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{

    return 0;
}