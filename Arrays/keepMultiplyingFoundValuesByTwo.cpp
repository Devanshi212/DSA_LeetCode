#include <bits/stdc++.h>

using namespace std;

int findFinalValue(vector<int> &nums, int original)
{

    while (std::find(nums.begin(), nums.end(), original) != nums.end())
    {
        original = original * 2;
    }
    return original;
}

int main()
{

    return 0;
}