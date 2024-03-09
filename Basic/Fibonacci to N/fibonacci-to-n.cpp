//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int N){
        vector<int> ans;
        int first = 0, second = 1, next = 0;
        ans.push_back(first);
        if(N==0) return ans;
        ans.push_back(second);
        while(next<=N){
            next = first+second;
            ans.push_back(next);
            first = second;
            second = next;
        }
        ans.pop_back();
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
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}
// } Driver Code Ends