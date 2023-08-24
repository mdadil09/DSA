#include<bits/stdc++.h>
using namespace std;

//Brute force Approach: Three loops ans hashset;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                } 
            }
        }
    }
    for(auto & a : st){
        ans.push_back(a);
    }
    return ans;
}

//Better Approach: Two loops

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=i+1;j<n;j++){
            int third = -(arr[i]+arr[j]);
            if(s.find(third) != s.end()){
                vector<int> temp = {arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            s.insert(arr[j]); 
        }
    }
    for(auto & a : st){
        ans.push_back(a);
    }
    return ans;
}

//Optimal Approach: Using three pointers

#include<bits/stdc++.h>

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i!= 0 && arr[i] == arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j < k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum < 0){
                j++;
            } else if(sum > 0){
                k--;
            } else {
                vector<int> temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && arr[j] == arr[j-1]) j++;
                while(j < k && arr[k] == arr[k+1]) k--;
            }
        }
    }
    return ans;
}
