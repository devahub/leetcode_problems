//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	void solve(vector<vector<int>>&ans,vector<int>&v,int i,int n){
	    if(n==0){
	        ans.push_back(v);
	        return;
	    }
	    if(i<1){
	        return; 
	    }
	    if(i<=n){
	        v.push_back(i);
	        solve(ans,v,i,n-i);
	        v.pop_back();
	        solve(ans,v,i-1,n);
	        
	    }
	    else{
	         solve(ans,v,i-1,n);
	    }
	    
	    
}
	
	
	
    vector<vector<int>> UniquePartitions(int n) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans,v,n,n);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends