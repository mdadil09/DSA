//Reading A version of two Sum;

//Brute force

#include <bits/stdc++.h> 
using namespace std;

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(book[i]+book[j] == target) return "YES";
        }
    }
    return "NO";
}

//Better Approach: Using unordered map

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(target-book[i]) != mp.end()){
            return "YES";
        }
        mp[book[i]] = i;
    }
    return "NO";
}

//Using Two Pointers space O(1);

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(),book.end());
    int i=0,j=n-1;
    while(i<j){
        int sum = book[i]+book[j];
        if(sum == target) return "YES";
        else if(sum < target) i++;
        else j--;
    }
    return "NO";
}



