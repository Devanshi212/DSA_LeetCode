#include <bits/stdc++.h>

using namespace std;

string firstPalindrome(vector<string> &words)
{
    string original;
    for (auto x : words)
    {
        original = x;
        reverse(x.begin(), x.end());
        if (original == x)
        {
            return original;
        }
    }
    original = "";
    return original;
}

int main()
{

    return 0;
}