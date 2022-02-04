#include <bits/stdc++.h>

using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    int res, ans = 0;
    for (int i = 0; i < words.size(); i++)
    {
        res = 1;
        for (auto x : words[i])
        {
            if (allowed.find(x) == string::npos)
                res = 0;
            if (res == 0)
                break;
        }
        if (res != 0)
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}