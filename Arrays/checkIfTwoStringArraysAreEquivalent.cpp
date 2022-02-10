#include <bits/stdc++.h>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one="",two="";
        for(auto x:word1)
        {
            one=one+x;
        }
        for(auto y:word2)
        {
            two=two+y;
        }
        return (one==two);
    }

int main(){
    
    return 0;
}