class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        for(int i=low;i<=high;i++){
            string x = to_string(i);
            int count = 0, n = x.size();
            for(int j=0;j<n/2;j++) count += x[j]-x[n-j-1];
            if(n%2 == 0 && count == 0) res++;
        }
        return res;
    }
};