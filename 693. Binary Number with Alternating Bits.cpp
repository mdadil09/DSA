class Solution {
public:
    string help(int n){
        if(n == 0) return 0;
        string x;
        while(n > 0){
            x = to_string(n%2) + x;
            n /= 2;
        }
        return x;
    }
    bool hasAlternatingBits(int n) {
        string a = help(n);
        for(int i=1;i<a.size();i++){
            if(a[i-1] == a[i]) return false;
        }
        return true;
    }
};