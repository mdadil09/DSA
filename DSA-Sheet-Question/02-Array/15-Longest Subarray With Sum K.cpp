//solution 1: Brute force.

#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
       int res = 0;
       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               int temp = 0;
               for(int k=i;k<=j;k++){
                   temp += a[k];
               }
               if(temp == k){
                   res = max(res,j-i+1);
               }
           }
       }
    return res;
}

//Solution 2: O(n^2)

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
       int res = 0;
       for(int i=0;i<n;i++){
           long long temp = 0;
           for(int j=i;j<n;j++){
               temp += a[j];
               if(temp == k){
                   res = max(res,j-i+1);
               }
           }
       }
    return res;
}

//Solution 3: Using While Loop

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int res = 0;
    int i=0,j=0;
    long long sum = a[0];
    while(j<n){
       while(i<=j && sum > k){
           sum -= a[i];
           i++;
       }
       if(sum == k){
           res = max(res,j-i+1);
       } 
       j++;
       if(j < n) sum += a[j];
    } 
    return res;
}