#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int countPoints(string rings)
{
    int res = 0;
    unordered_map<int, set<int>> m;
    for (int i = 1, j = 0; rings[j] != '\0' && rings[i] != '\0'; i = i + 2, j = j + 2)
    {
        if (rings[j] == 'B')
            m[rings[i]].insert(1);
        else if (rings[j] == 'G')
            m[rings[i]].insert(2);
        else if (rings[j] == 'R')
            m[rings[i]].insert(3);
    }
    for (auto x = m.begin(); x != m.end(); x++)
    {
        if (x->second.size() == 3)
            res++;
    }
    return res;
}

int main()
{

    return 0;
}