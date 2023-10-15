//method 1

class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> nums1,nums2;
        for(int i=1;i<=n;i++){
            if(i%m != 0) nums1.push_back(i);
            else nums2.push_back(i);
        }
        int sum1 = 0, sum2 = 0;
        int res = 0;
        for(int i=0;i<nums1.size();i++){
            sum1 += nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            sum2 += nums2[i];
        }
        res = sum1 - sum2;
        return res;
    }
};

//method 2:

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int res = 0;
        for(int i=1;i<=n;i++){
            if(i%m == 0) res -= i;
            else res += i;
        }
        return res;
    }
};