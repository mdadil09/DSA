class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1,res = -1;
        while(low<high){
            int mid = (low+high)/2;
            if(arr[mid] > arr[mid+1]){
                res = mid;
                high = mid;
            } else {
                res = mid+1;
                low = mid+1;
            }
        }
        return res;
    }
};