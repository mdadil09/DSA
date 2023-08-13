#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int n = A.size();
    int l,k;
    for(k=n-2;k>=0;k--){
        if(A[k] < A[k+1]) break;
    }
    if(k < 0) reverse(A.begin(),A.end());
    else {
        for(l=n-1;l>k;l--){
            if(A[l] > A[k]) break;
        }
        swap(A[k],A[l]);
        reverse(A.begin()+k+1,A.end());
    }
    return A;
}