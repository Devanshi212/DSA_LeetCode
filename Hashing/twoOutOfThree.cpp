#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
{
    vector<int> res;
    set<int> uni;
    for (auto x : nums1)
    {
        uni.insert(x);
    }
    for (auto x : nums2)
    {
        uni.insert(x);
    }
    for (auto x : nums3)
    {
        uni.insert(x);
    }
    for (auto x : uni)
    {
        int cnt = 0;
        if (find(all(nums1), x) != nums1.end())
        {
            cnt++;
        }
        if (find(all(nums2), x) != nums2.end())
        {
            cnt++;
        }
        if (find(all(nums3), x) != nums3.end())
        {
            cnt++;
        }
        if (cnt >= 2)
            res.push_back(x);
    }
    return res;
}

//using hash table and set- much shorter code
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, set<int>> ump;
        for(int i = 0; i < nums1.size(); ++i)
            ump[nums1[i]].insert(1);
        for(int i = 0; i < nums2.size(); ++i)
            ump[nums2[i]].insert(2);
        for(int i = 0; i < nums3.size(); ++i)
            ump[nums3[i]].insert(3);
        vector<int> res;
        for(auto it = ump.begin(); it != ump.end(); ++it)
            if(it->second.size() >= 2)
                res.push_back(it->first);
        return res;
    }

int main()
{

    return 0;
}