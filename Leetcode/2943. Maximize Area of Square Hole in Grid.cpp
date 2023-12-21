class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());

        int maxH = 0, maxV = 0;
        for(int i=0;i<hBars.size();i++){
            int cnt = 1;
            while(i+1<hBars.size() && hBars[i]+1 == hBars[i+1]){
                i++;
                cnt++;
            }
            maxH = max(maxH,cnt);
        }

        for(int i=0;i<vBars.size();i++){
            int cnt = 1;
            while(i+1<vBars.size() && vBars[i]+1 == vBars[i+1]){
                i++;
                cnt++;
            }
            maxV = max(maxV,cnt);
        }

        int mini = min(maxV+1,maxH+1);
        return mini*mini;
    }
};