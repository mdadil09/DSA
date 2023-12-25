#define mod 1000000007

class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        long long ans = -1;
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        sort(hFences.begin(),hFences.end());
        sort(vFences.begin(),vFences.end());

        unordered_map<int,bool> possibleLength;
        for(int i=0;i<hFences.size();i++){
            for(int j=i+1;j<hFences.size();j++){
                int length = hFences[j] - hFences[i];
                possibleLength[length] = true;
            }
        }
        for(int i=0;i<vFences.size();i++){
            for(int j=i+1;j<vFences.size();j++){
                int length = vFences[j] - vFences[i];
                if(possibleLength.find(length) != possibleLength.end()){
                    ans = max(ans,1ll*length);
                }
            }
        }
        return ans == -1 ? ans : ((ans*ans)%mod);
    }
};