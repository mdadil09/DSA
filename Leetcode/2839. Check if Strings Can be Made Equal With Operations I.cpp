class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string a = s1, b = s1, c = s1;
        swap(a[0],a[2]);
        swap(b[1],b[3]);
        swap(c[0],c[2]);
        swap(c[1],c[3]);
        if(s1 == s2 || a == s2 || b == s2 || c == s2) return true;
        return false;
    }
};