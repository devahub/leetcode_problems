//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n=nums.size();
	    
	    vector<int> dp1(n+1,0);
	    for(int i=0;i<n;i++){
	        int c=0;
	        for(int j=i-1;j>=0;j--){
	            if(nums[j]<nums[i]){
	               c=max(c,dp1[j]);
	            }
	        }
	        dp1[i]=c+1;
	    }
	   
	   
	   
	    vector<int> dp2(n+1,0);
	    for(int i=n-1;i>=0;i--){
	        int ct=0;
	        for(int j=i+1;j<n;j++){
	            if(nums[j]<nums[i]){
	                ct=max(ct,dp2[j]);
	            }
	        }
	        dp2[i]=ct+1;
	    }
	    
	    
	    
	    
	    int ans=0;
	    for(int i=0;i<n;i++){
	        int ct=dp1[i]+dp2[i]-1;
	        ans=max(ans,ct);
	    }
	    
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
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends