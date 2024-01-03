class Solution {
public:
    int maximumLength(string s) {
        int count = 0, last = s[0], ans = 0;
        unordered_map<char, vector<int>> mp;
        for (auto c : s) {
            if (c == last)
                count++;
            else {
                mp[last].push_back(count);
                count = 1;
                last = c;
            }
        }
        mp[last].push_back(count);
        for (auto [k, v] : mp) {
            int l1 = 0, l2 = 0, l3 = 0;
            for (auto e : v) {
                if (l1 < e) {
                    l3 = l2;
                    l2 = l1;
                    l1 = e;
                } else if (l2 < e) {
                    l3 = l2;
                    l2 = e;
                } else if (l3 < e) {
                    l3 = e;
                }
            }
            if (l1 == l2 && l1 > l3)
                l2--;
            if (l1 + l2 + l3 >= 3)
                ans = max({ans, l1 - 2, l2});
        }
        return ans != 0 ? ans : -1;
    }
};