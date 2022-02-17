#include <bits/stdc++.h>

using namespace std;

int countWords(vector<string> &words1, vector<string> &words2)
{
    unordered_map<string, int> m1, m2;
    int ans = 0;
    for (auto x : words1)
        m1[x]++;
    for (auto x : words2)
        m2[x]++;
    for (auto x : words2)
    {
        if (m1[x] == 1 && m2[x] == 1)
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}