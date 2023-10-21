class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int n = processorTime.size(), m = tasks.size();
        sort(processorTime.begin(),processorTime.end(),greater<int>());
        sort(tasks.begin(),tasks.end());
        int res = 0;
        for(int i=0;i<n;i++){
            res = max(res,processorTime[i] + tasks[i*4+3]);
        }
        return res;
    }
};