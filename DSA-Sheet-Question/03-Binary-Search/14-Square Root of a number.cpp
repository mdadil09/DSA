#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    // Write your code here.
    int low = 1, high = n;
    while(low<=high){
        long long mid = (low+high)/2;
        long long x = mid*mid;
        if(x <= (long long)n){
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return high;
}