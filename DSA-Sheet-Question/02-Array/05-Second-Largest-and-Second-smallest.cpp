#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int maxi = INT_MIN, secondMaxi = INT_MIN;
    int mini = INT_MAX, secondMini = INT_MAX;

    for(int i=0;i<n;i++){
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i] < secondMini && a[i] != mini){
            secondMini = a[i];
        }
        if (a[i] > secondMaxi && a[i] != maxi) {
          secondMaxi = a[i];
        }
    }
    vector<int> res;
    res.push_back(secondMaxi);
    res.push_back(secondMini);
    cout<<"Second Minimum is: "<<secondMini<<endl;
    cout<<"Second Maximum is: "<<secondMaxi<<endl;
    return res;
}

int main(){
    vector<int> res = {1,2,9,6,4};
    int n = res.size();
    getSecondOrderElements(n,res);
    return 0;
}