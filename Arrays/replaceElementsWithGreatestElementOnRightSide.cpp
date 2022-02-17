#include <bits/stdc++.h>

using namespace std;

vector<int> replaceElements(vector<int> &arr)
{
    vector<int> ans(arr.size(), -1);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        ans[i] = *max_element(arr.begin() + i + 1, arr.end());
    }
    return ans;
}

// without using any extra space
vector<int> replaceElements(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = *max_element(arr.begin() + i + 1, arr.end());
    }
    arr[arr.size() - 1] = -1;
    return arr;
}

int main()
{

    return 0;
}