#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int> &v)
{
    // Write Your Code Here
    int n = v.size();
    vector<int> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    int maxi = 0, mini = n;
    int minEl = 0, maxEl = 0;
    for (auto a : mp)
    {
        int countFreq = a.second;
        int elem = a.first;
        if (countFreq == maxi && maxEl > a.first)
        {
            maxEl = a.first;
        }
        else if (countFreq > maxi)
        {
            maxEl = a.first;
            maxi = countFreq;
        }
        if (countFreq == mini && minEl > a.first)
        {
            minEl = a.first;
        }
        else if (countFreq < mini)
        {
            minEl = a.first;
            mini = countFreq;
        }
    }
    res.push_back(maxEl);
    res.push_back(minEl);
    return res;
}