#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int countBalls(int lowLimit, int highLimit)
{
    int ans = INT_MIN;
    unordered_map<int, int> mp;
    for (int i = lowLimit; i <= highLimit; i++)
    {
        int sum = 0;
        int val = i;
        while (val)
        {
            sum += (val % 10);
            val /= 10;
        }
        mp[sum]++;
    }
    for (auto it : mp)
    {
        ans = max(ans, it.second);
    }
    return ans;
}

int main()
{

    return 0;
}