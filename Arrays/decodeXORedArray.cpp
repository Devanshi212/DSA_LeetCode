#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> arr;
    arr.push_back(first);
    for (int i = 0; i < encoded.size(); i++)
    {
        arr.push_back(arr[i] ^ encoded[i]);
    }
    return arr;
}

int main()
{

    return 0;
}