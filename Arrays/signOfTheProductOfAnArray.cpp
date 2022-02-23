#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int arraySign(vector<int> &nums)
{
    int neg = 0;
    for (auto x : nums)
    {
        if (x == 0)
            return 0;
        else if (x < 0)
            neg++;
    }
    if (neg % 2 == 0)
        return 1;
    else
        return -1;
}

int main()
{

    return 0;
}