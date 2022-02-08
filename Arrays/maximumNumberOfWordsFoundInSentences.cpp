#include <bits/stdc++.h>

using namespace std;

int mostWordsFound(vector<string> &sentences)
{
    int words, maxWords = 0;
    for (auto x : sentences)
    {
        words = 1;
        for (auto y : x)
        {
            if (y == ' ')
                words += 1;
        }
        maxWords = max(words, maxWords);
    }
    return maxWords;
}

int main()
{

    return 0;
}