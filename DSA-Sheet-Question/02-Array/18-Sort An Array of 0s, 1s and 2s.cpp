//Brute force

#include <bits/stdc++.h> 
using namespace std;
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]) swap(arr[i],arr[j]);
        }
    }
}

//Better Approach: TC: O(N) SC: O(1)

void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int left = 0,mid = 0, right = n-1;
    while(mid <= right){
      if (arr[mid] == 0) {
        swap(arr[left], arr[mid]);
        left++;
        mid++;
      } else if (arr[mid] == 2) {
            swap(arr[mid], arr[right]);
            right--;
      } else mid++;
    }
}

