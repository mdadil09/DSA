class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        int res = 0;
        for(int i=0;i<n;i++){
            if(batteryPercentages[i] > res){
                res += 1;
            } else {
                res += 0;
            }
        }
        return res;
    }
};