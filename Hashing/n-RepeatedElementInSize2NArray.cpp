#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int repeatedNTimes(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (auto x : nums)
        m[x]++;
    for (auto x : m)
    {
        if (x.second == nums.size() / 2)
            return x.first;
    }
    return 0;
}

int main()
{

    return 0;
}