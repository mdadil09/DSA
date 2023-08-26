#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int arr[], int n)
{
	for(int i=0;i<=n-1;i++){
		int j = i;
		while(j > 0 && arr[j-1] > arr[j]){
			int temp  = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int main() {
    int arr[] = {69,57,81,1,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    return 0;
}