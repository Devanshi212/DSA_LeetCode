#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

bool areOccurrencesEqual(string s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int check = m[s[0]];
    for (auto x : m)
    {
        if (x.second != check)
            return false;
    }
    return true;
}

int main()
{

    return 0;
}