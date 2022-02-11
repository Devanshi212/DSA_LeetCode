#include <bits/stdc++.h>

using namespace std;

int findGCD(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        return gcd(max,min);
        
    }

int main(){
    
    return 0;
}