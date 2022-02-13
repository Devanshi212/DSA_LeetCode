#include <bits/stdc++.h>

using namespace std;

int findNumbers(vector<int> &nums)
{
    int res = 0, digits;
    string no = "";
    for (auto x : nums)
    {
        no = to_string(x);
        digits = no.length();
        if (digits % 2 == 0)
            res++;
    }
    return res;
}

int main()
{

    return 0;
}