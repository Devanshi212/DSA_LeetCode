#include <bits/stdc++.h>

using namespace std;

int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=(nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
        return res;
    }

int main(){
    
    return 0;
}