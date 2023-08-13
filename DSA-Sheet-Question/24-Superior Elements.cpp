//Brute force

#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int n = a.size();
    for(int i=0;i<n;i++){
        bool leader = true;
        for(int j=i+1;j<n;j++){
            if(a[j] > a[i]){
                leader = false;
                break;
            }
        }
        if(leader) 
        ans.push_back(a[i]);
    }

    return ans;
}

int main(){
    vector<int> arr = {1,2,2,1};
    vector<int> ans = superiorElements(arr);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    return  0;
}

//Optimal

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int> ans;
    int max = a[n-1];
    ans.push_back(a[n-1]);
    for(int i=n-2;i>=0;i--){
        if(a[i] > max){
            ans.push_back(a[i]);
            max = a[i];
        }
    }
    return ans;
}

