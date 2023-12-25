#define ll long long int
class Solution {
public:
    unordered_map<string, ll> conversionCost;
    unordered_map<char, vector<pair<char, ll>>> gr;
    void dijkstras(char source) {
        priority_queue<pair<ll, char>, vector<pair<ll, char>>,
                       greater<pair<ll, char>>>
            pq;
        pq.push({0, source}); // dis,source;
        vector<ll> dis(26, LONG_MAX);

        // starting from this source,distance to all other nodes, in shortest
        // pathway
        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();

            char node = p.second;
            ll distance = p.first;
            if (dis[node - 'a'] <= distance)
                continue;
            dis[node - 'a'] = distance;
            conversionCost[getSourceToTargetString(source, node)] = distance;

            for (pair<char, ll> childPair : gr[node]) {
                if (dis[childPair.first - 'a'] == LONG_MAX) {
                    pq.push({distance + childPair.second, childPair.first});
                }
            }
        }
    }

    string getSourceToTargetString(char original, char changed) {
        string sourceToTarget = "";
        sourceToTarget.push_back(original);
        sourceToTarget.push_back(',');
        sourceToTarget.push_back(changed);
        return sourceToTarget;
    }

    long long minimumCost(string source, string target, vector<char>& original,
                          vector<char>& changed, vector<int>& cost) {
        for (int i = 0; i < original.size(); i++) {
            string sourceToTarget =
                getSourceToTargetString(original[i], changed[i]);
            gr[original[i]].push_back({changed[i], cost[i]});
            conversionCost[sourceToTarget] = cost[i];
        }

        // Get all existing conversion costs & then try to find all 26*26 pair
        // conversion cost.

        for (char s1 = 'a'; s1 <= 'z'; s1++) {
            dijkstras(s1);
        }

        ll ans = 0;
        for (int i = 0; i < source.size(); i++) {
            string s = getSourceToTargetString(source[i], target[i]);
            if (conversionCost.find(s) == conversionCost.end()) {
                return -1;
            }
            ans += conversionCost[s];
        }
        return ans;
    }
};