#include <bits/stdc++.h>

using namespace std;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> m;
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])==m.end())
                m[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])!=m.end())
            {
                res.push_back(nums2[i]);
                m.erase(nums2[i]);
            }
        }
        return res;
    }

int main(){
    
    return 0;
}