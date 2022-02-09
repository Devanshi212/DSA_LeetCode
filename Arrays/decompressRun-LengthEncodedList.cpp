#include <bits/stdc++.h>

using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> res;
    for (int i = 0, j = 1; i < nums.size() - 1; i += 2, j += 2)
    {
        res.insert(res.end(), nums[i], nums[j]);
    }
    return res;
}

int main()
{

    return 0;
}