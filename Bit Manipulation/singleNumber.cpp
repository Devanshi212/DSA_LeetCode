#include <bits/stdc++.h>

using namespace std;

// this method does not use constant space(using a map)
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (auto x : nums)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        if (x.second == 1)
            return x.first;
    }
    return 0;
}

// using constant space
int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i += 2)
    {
        if (nums[i] != nums[i - 1])
            return nums[i - 1];
    }
    return nums[nums.size() - 1];
}

// using bit manipulation (best approach in terms of time and space complexity)
//  XOR Gate
//  According to this gate , the output is true , only if both the inputs are of opposite kind .
//  That is ,
//  A B Y
//  0 0 0
//  0 1 1
//  1 0 1
//  1 1 0
//  Similarly , if we observe ,
//  A^A=0
//  A^B^A=B
//  (A^A^B) = (B^A^A) = (A^B^A) = B This shows that position doesn't matter.
//  Similarly , if we see , a^a^a......... (even times)=0 and a^a^a........(odd times)=a
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (auto x : nums)
        ans ^= x;
    return ans;
}

int main()
{

    return 0;
}
