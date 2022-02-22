#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int heightChecker(vector<int> &heights)
{
    vector<int> expected = heights;
    int ans = 0;
    sort(heights.begin(), heights.end());
    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] != expected[i])
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}