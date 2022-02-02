#include <bits/stdc++.h>

using namespace std;

// optimized code in terms of time complexity
vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> res;
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]] = i;
    }
    // used for debugging
    //  for (auto i = m.begin(); i != m.end(); i++)
    //  {
    //      cout << i->first << " " << i->second << endl;
    //  }
    int val;
    for (int i = 0; i < nums.size(); i++)
    {
        val = target - nums[i];
        if (m.find(val) == m.end())
            continue;
        else
        {
            auto itr = m.find(val);
            if (itr->second != i)
            {
                res.push_back(i);
                res.push_back(itr->second);
                return res;
            }
        }
    }
    return res;
}

// O(n*n) time complexity
//  vector<int> twoSum(vector<int> &nums, int target)
//  {

//     vector<int> res;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 res.push_back(i);
//                 res.push_back(j);
//                 return res;
//             }
//         }
//     }
//     return res;
// }

int main()
{

    return 0;
}
