class Solution {
public:
    int reachNumber(int target) {
        if(target < 0) target = -target;
        int count = 0;
        int sum = 0;
        while(true){
            count++;
            sum += count;
            if(sum == target) return count;
            else if(sum > target && (sum-target)%2 == 0) return count;
        }
    }
};