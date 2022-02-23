#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int countLargestGroup(int n)
{
    unordered_map<int, int> m;
    int mx = INT_MIN, res = 0;
    for (int i = 1; i <= n; i++)
    {
        int val = i;
        int sum = 0;
        while (val > 0)
        {
            sum += val % 10;
            val /= 10;
        }
        m[sum]++;
        mx = max(mx, m[sum]);
    }

    for (auto x : m)
    {
        if (x.second == mx)
            res++;
    }
    return res;
}

int main()
{

    return 0;
}