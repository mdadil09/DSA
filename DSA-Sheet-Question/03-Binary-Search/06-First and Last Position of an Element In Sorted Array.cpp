#include <bits/stdc++.h>
using namespace std;

int fun1(vector<int>& arr, int n, int k){
    int low = 0, high = n-1;
    int res = n;
    while(low <= high){
        int mid = low +(high - low)/2;
        if(arr[mid] >= k){
            res = mid;
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

int fun2(vector<int>& arr, int n, int k){
    int low = 0, high = n-1;
    int res = n;
    while(low <= high){
        int mid = low +(high - low)/2;
        if(arr[mid] > k){
            res = mid;
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int a = fun1(arr,n,k);
    if(a == n || arr[a] != k){
        return {-1,-1};
    }
    int b = fun2(arr,n,k)-1;
    return {a,b};
}