class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int count1 = 0, count2 = 0;
        for(int i=0;i<n;i++){
            if(customers[i] == 'Y') count1++;
        }
        map<int,int> mp;
        mp[0] = count1;
        for(int i=0;i<n;i++){
            if(customers[i] == 'Y') count2++;
            else count2--;
            mp[i+1] = count1-count2;
        }
        int res = n;
        int p = n;
        for(auto i : mp){
            if(i.second < p){
                res = i.first;
                p = i.second;
            }
        }
        return res;
    }
};