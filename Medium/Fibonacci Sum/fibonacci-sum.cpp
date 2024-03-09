//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        //code here
        if(N==0) return 0;
        if(N==1) return 1;
        if(N==2) return 2;
        long long int m = 1000000007, sum = 1, msum = 2;
        int f = 0, s = 1, c = 2;
        while(c<N){
            f = s;
            s = sum;
            sum = f + s;
            sum = sum % m;
            msum += sum;
            msum = msum % m;
            c++;
        }
        return msum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends