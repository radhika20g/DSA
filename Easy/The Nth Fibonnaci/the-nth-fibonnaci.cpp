//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int fib(int n){
        if(n<2) return n;
        int a=0, b=1, c=0;
        for(int i=1; i<n; i++){
            c = (a+b)%10;
            a = b;
            b = c;
        }
        return c%10;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends