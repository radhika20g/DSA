//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int temp = N;
        int ans = 0, rem = 0;
        while(temp>0){
            rem = temp%10;
            if(rem!=0 && N%rem == 0)
                ans++;
            temp = temp/10;
            //cout<<rem<<" "<<ans<<" "<<temp<<endl;
        }
        return ans;
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
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends