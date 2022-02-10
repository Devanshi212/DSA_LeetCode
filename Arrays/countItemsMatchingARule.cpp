#include <bits/stdc++.h>

using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res=0;
        int pos=ruleKey[0]=='t'?0:ruleKey[0]=='c'?1:2;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][pos]==ruleValue)
                res++;
        }
        
        return res;
    }

int main(){
    
    return 0;
}