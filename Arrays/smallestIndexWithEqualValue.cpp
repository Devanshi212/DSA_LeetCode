#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int smallestEqual(vector<int> &nums)
{
    int smallest = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 10 == nums[i])
            smallest = min(i, smallest);
    }
    if (smallest == nums.size())
        return -1;
    return smallest;
}

int main()
{

    return 0;
}