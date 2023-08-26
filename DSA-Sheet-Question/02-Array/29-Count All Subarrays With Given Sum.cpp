#include<bits/stdc++.h>
using namespace std;

//Brute force:

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = 0;
            for(int t=i;t<=j;t++){
                temp += arr[t];
            }
            if(temp == k){
                count++;
            }
        }
    }
    return count;
}

//Better Approach:

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int j=i;j<n;j++){
            temp += arr[j];
            if(temp == k) count++;
        }
    }
    return count;
}

//Optimal Approach:

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    map<int,int> mp;
    int preSum = 0, count = 0;
    mp[0] = 1;
    for(int i=0;i<n;i++){
        preSum += arr[i];
        int remove = preSum - k;
        count += mp[remove];
        mp[preSum] += 1;
    }
    return count;
}