#include<bits/stdc++.h>
using namespace std;


//1st method:
int isCyclicRotation(string &p, string &q) 
{
    // Write your code here
    if(p.size() != q.size()) return 0;
    if(p == q) return 1;
    int len = q.size();
    while(len--){
        if(p == q) return 1;
        p = p.substr(1) + p[0];
    }
    return 0;
}

//2nd method: one liner

int isCyclicRotation(string &p, string &q) 
{
    // Write your code here
    return p.length() == q.length() && (p+p).find(q) != string::npos;
}

//3rd method:

int isCyclicRotation(string &p, string &q) 
{
    // Write your code here
    if(p==q) return 1;
    string x = p;
    char ch = x[x.size()-1];
    x.erase(x.size()-1,1);
    x.insert(0,1,ch);
    while(x!=p){
        if(x == q) return 1;
        char ch = x[x.size()-1];
        x.erase(x.size()-1,1);
        x.insert(0,1,ch);
    }
    return 0;
}