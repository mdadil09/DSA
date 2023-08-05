class Solution {
public:
    string checkCommonPart(string a, string b){
        if(a.find(b) != string::npos){
            return a;
        }
        for(int i=min(a.length(),b.length());i>=0;i--){
            if(a.substr(a.length()-i) == b.substr(0,i)){
                return a + b.substr(i);
            }
        }
        return a + b;
    }
    void isValid(string merged,string &result){
        if(result.empty() || merged.length() < result.length() || (merged.length() == result.length() && merged < result)){
            result = merged;
        }
    }
    string minimumString(string a, string b, string c) {
        vector<string> arr = {a,b,c};
        int n = arr.size();
        string result = "";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i != j && j != k && i != k){
                        string merged = checkCommonPart(arr[i],arr[j]);
                        merged = checkCommonPart(merged,arr[k]);
                        isValid(merged,result);
                    }
                }
            }
        }
        return result;
    }
};