#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

double trimMean(vector<int> &arr)
{
    int remove = arr.size() * 0.05;
    double mean = 0;
    sort(arr.begin(), arr.end());
    arr.erase(arr.begin(), arr.begin() + remove);
    arr.erase(arr.end() - remove, arr.end());
    for (auto x : arr)
        mean = mean + x;
    return mean / arr.size();
}

int main()
{

    return 0;
}