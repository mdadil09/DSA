// pattern-13

// 1
// 2 3
// 4 5 6

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void nNumberTriangle(int n) {
        // Write your code here.
        int num = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num = num+1;
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
        ob.nNumberTriangle(n);
    }
    return 0;
}
// } Driver Code Ends