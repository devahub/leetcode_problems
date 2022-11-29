//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    long long int numoffbt(long long int arr[], int n){
        const long long int mod=1000000007;
        long long int mini=INT_MAX,maxi=INT_MIN;
        long long int ans = 0;
        int pd;
         for(int i = 0; i < n; i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        vector<bool> vis(maxi+1, false);
        vector<long long int> sol(maxi+1, 0);
        
        for(int i=0;i<n;i++){
            vis[arr[i]]=1;
            sol[arr[i]]=1;
        }
         for(int i = mini; i <= maxi; i++){
            if(!vis[i]){
                continue;
            }
            for(int j = 2; i*j <= maxi && j <= i; j++){
                pd = i*j;
                if(!vis[pd]){
                    continue;
                }
                sol[pd] = (sol[pd] + (sol[i]*sol[j])%mod)%mod;
                if(i != j){
                    sol[pd] = ( sol[pd] + (sol[i]*sol[j])%mod)%mod;
                }
            }
            ans = (ans + sol[i])%mod;
        }
        return ans;
        
        
        
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<<ob.numoffbt(a,n)<<endl;
		
	}
	return 0;
}


// } Driver Code Ends