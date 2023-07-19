// *********
//  *******
//   *****
//    ***
//     *

#include <bits/stdc++.h>

using namespace std;


class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int k=0;k<2*n -(2*i+1);k++){
                    cout<<"*";
            }
            for(int j=0;j<i;j++){
                cout<<" ";
            }    
            cout<<"\n";
        }
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
