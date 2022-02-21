#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

vector<int> sortEvenOdd(vector<int> &nums)
{
    vector<int> odd, even;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
            even.push_back(nums[i]);
        else
            odd.push_back(nums[i]);
    }
    sort(odd.begin(), odd.end(), greater());
    sort(even.begin(), even.end());
    int i = 1;
    for (auto x : odd)
    {
        nums[i] = x;
        i = i + 2;
    }
    i = 0;
    for (auto x : even)
    {
        nums[i] = x;
        i = i + 2;
    }
    return nums;
}

int main()
{

    return 0;
}