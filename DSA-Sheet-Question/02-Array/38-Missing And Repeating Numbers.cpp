#include<bits/stdc++.h>
using namespace std;

//Brute Force:

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int n = a.size();
    int repeating = -1,missing = -1;
    for(int i=1;i<=n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(a[j] == i) cnt++;
        }
        if(cnt > 1) repeating = i;
        if(cnt == 0) missing = i;

        if(repeating != -1 && missing != -1) break;
    }
    return {repeating,missing};
}

//Better approach;


vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int repeating = -1, missing = -1;
    int n = a.size();
    int mp[n+1] = {0};
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(mp[i] > 1) repeating = i;
        if(mp[i] == 0) missing = i;

        if(repeating != -1 && missing != -1) break;
    }
    return {repeating,missing};
}