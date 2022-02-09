#include <bits/stdc++.h>

using namespace std;

// using a separate stack
string makeGood(string s)
{
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (!empty(st) && abs(st.top() - s[i]) == 32)
        {
            st.pop();
            continue;
        }
        st.push(s[i]);
    }
    while (!st.empty())
    {
        res = res + st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

// using string as a stack
//  string makeGood(string s) {
//          string ans="";
//          int i=0;
//          while(i<s.length()){
//              if(ans.length()!=0 && abs(s[i]-ans[ans.length()-1])==32){
//                  ans.pop_back();
//              }
//              else{
//                  ans.push_back(s[i]);
//              }
//              i++;
//          }
//          return ans;
//      }

int main()
{

    return 0;
}