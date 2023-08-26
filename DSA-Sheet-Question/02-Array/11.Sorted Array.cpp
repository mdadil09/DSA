#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> res;
    set<int> s;
    for(int i : a){
        s.insert(i);
    }
    for(int i : b){
        s.insert(i);
    }
    for(auto j : s){
        res.push_back(j);
    }
    return res;
}