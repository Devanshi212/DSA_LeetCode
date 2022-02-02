#include <bits/stdc++.h>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int c = 0;
    map<char, int> m;
    for (int i = 0; i < jewels.length(); i++)
        m[jewels[i]] = 0;
    // used for debugging
    // for (auto x : m)
    //     cout << x.first << " - " << x.second << endl;

    for (int i = 0; i < stones.length(); i++)
    {
        if (m.find(stones[i]) != m.end())
            m[stones[i]]++;
    }

    for (auto x : m)
        c = c + x.second;

    return c;
}

int main()
{

    return 0;
}