#include <bits/stdc++.h>

using namespace std;

int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
{
    int count = 0;
    for (int i = 0; i < startTime.size(); i++)
    {
        if (startTime[i] <= queryTime && endTime[i] >= queryTime)
            count++;
    }
    return count;
}

int main()
{

    return 0;
}