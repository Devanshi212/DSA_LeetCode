#include <bits/stdc++.h>

using namespace std;

//map can also be used- but takes up extra space 
//sorting and iterating through the array
int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.size() == 1)
        return nums[0];
    for (int i = 0; i < nums.size() - 2; i = i + 3)
    {
        if (nums[i] != nums[i + 1] && nums[i] != nums[i + 2])
            return nums[i];
    }
    return nums[nums.size() - 1];
}

//using bit manipulation
int singleNumber(vector<int>& nums) {
        int check, count, ans = 0;
        for(int i=0; i<=31; i++){
            check = 1<<i, count=0;
            for(auto n : nums) if(n & check) count++;
            if(count%3) ans |= check;
        }
        return ans;
    }

int main()
{

    return 0;
}