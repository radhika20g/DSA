//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int i=1;
    void help(int n){
        if(n==0) return;
        cout<<i<<" ";
        i++;
        help(n-1);
    }
    void printTillN(int n)
    {
        help(n);
        return;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printTillN(N);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends