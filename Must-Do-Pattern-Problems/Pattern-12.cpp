// pattern-12

// 1         1
// 1 2     2 1
// 1 2 3 3 2 1


#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }

        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.numberCrown(n);
    }
    return 0;
}
// } Driver Code Ends