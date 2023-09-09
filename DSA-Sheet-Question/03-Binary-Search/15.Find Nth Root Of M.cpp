#include<bits/stdc++.h>
using namespace std;

//Linear Search:

long long help(int n,int m){
  long long ans = 1, b = n;
  while(m > 0){
    if(m%2){
      m--;
      ans = ans*b;
    } else {
      m /= 2;
      b = b*b;
    }
  }
  return ans;
}

int NthRoot(int n, int m) {
  // Write your code here.
  for(int i=1;i<m;i++){
    long long x = help(i,n);
    if(x == m*1ll){
      return i;
    } else if(x > m*1ll) {
      break;
    }
  }
  return -1;
}

//Binary Search:

int help(int mid,int n,int m){
  long long ans = 1;
  for(int i=1;i<=n;i++){
    ans = ans*mid;
    if(ans > m) return 2;
  }
  if(ans == m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1, high = m;
  while(low <= high){
    int mid = low + (high-low)/2;
    if(help(mid,n,m) == 1) return mid;
    else if(help(mid,n,m) == 0) low = mid+1;
    else high = mid-1;
  }
  return -1;
}