class Solution {
public:
    int countBits(long long num){
        int count = 0;
        while(num > 0){
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
    int makeTheIntegerZero(int num1, int num2) {
        if(num1 < num2) return -1;
        for(int i=0;i<=100;i++){
            long long x = num1 - 1LL*(num2)*i;
            int y = countBits(x);
            if(y <= i && i <= x) return i;
        }
        return -1;
    }
};