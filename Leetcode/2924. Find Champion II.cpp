class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        unordered_map<int,int> lostCount;
        for(auto edge : edges){
            lostCount[edge[1]]++;
        }
        int countChampions = 0, champion = 0;
        for(int team=0;team<n;team++){
            if(lostCount[team] == 0){
                countChampions++;
                champion = team;
            }
        }
        return countChampions == 1 ? champion : -1;
    }
};