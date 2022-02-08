#include <bits/stdc++.h>

using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int r = 0;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "--X")
            --r;
        if (operations[i] == "X--")
            r--;
        if (operations[i] == "X++")
            r++;
        if (operations[i] == "++X")
            ++r;
    }

    return r;
}

int main()
{

    return 0;
}