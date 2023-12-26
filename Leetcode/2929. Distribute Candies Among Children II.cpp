class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long res = 0;
        long long amin = max(0,n-2*limit), amax = min(n,limit);
        for(int a=amin;a<=amax;a++){
            long long bmin = max(0,n-a-limit), bmax = min(limit,n-a);
            int rangeLength = bmax - bmin + 1;
            if(rangeLength >= 0) res += rangeLength;
        }
        return res;
    }
};