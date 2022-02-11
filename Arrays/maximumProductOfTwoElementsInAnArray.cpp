#include <bits/stdc++.h>

using namespace std;

int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater());
        return (nums[0]-1)*(nums[1]-1);
        
    }

//Brute Force method
// int maxProduct(vector<int> &nums)
// {
//     int max = 0;
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             max = std::max((nums[i] - 1) * (nums[j] - 1), max);
//         }
//     }
//     return max;
// }

int main()
{

    return 0;
}