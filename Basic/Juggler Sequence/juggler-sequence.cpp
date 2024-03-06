//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void help(int n, vector<int>&ans){
        if(n==1)
            return;
        int temp=0;
        if(n%2==0){
            temp = pow(n, 0.5);
            ans.push_back(temp);
            help(temp, ans);
        }else{
            temp = pow(n, 1.5);
            ans.push_back(temp);
            help(temp, ans);
        }
    }
    vector<int> jugglerSequence(int N){
        // code here
        vector<int>ans;
        ans.push_back(N);
        help(N, ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends