#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

string kthDistinct(vector<string> &arr, int k)
{
    unordered_map<string, int> m;
    for (auto x : arr)
        m[x]++;
    for (int i = 0; i < arr.size(); i++)
    {
        if (m[arr[i]] == 1)
            k--;
        if (k == 0)
            return arr[i];
    }
    return "";
}

int main()
{

    return 0;
}