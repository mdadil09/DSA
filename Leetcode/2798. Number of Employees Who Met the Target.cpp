#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
       int n = hours.size();
       int res = 0;
       for(int i=0;i<n;i++){
           if(hours[i] >= target) res++;
       }
       return res; 
    }
};