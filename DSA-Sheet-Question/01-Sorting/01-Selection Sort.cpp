#include <bits/stdc++.h> 
using namespace std;

void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    swap(arr[0],arr[n-1]);
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}