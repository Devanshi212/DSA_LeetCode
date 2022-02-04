#include <bits/stdc++.h>

using namespace std;

//time complexity O(n) using hash map
int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int res=0,val1,val2;
        for(int i=0;i<nums.size();i++)
        {
            val1=m[nums[i]+k];
            val2=m[nums[i]-k];
            res=res+val1+val2;
            m[nums[i]]++;
        }
        return res;
    }

//time complexity O(n*n)
// int countKDifference(vector<int>& nums, int k) {
//         int res=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(abs(nums[i]-nums[j])==k)
//                     res=res+1;
//             }
//         }
//         return res;
//     }

int main(){
    
    return 0;
}