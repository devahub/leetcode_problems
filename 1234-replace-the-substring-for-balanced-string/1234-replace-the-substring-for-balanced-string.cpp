class Solution {
public:
    int balancedString(string s) {
        int n=s.size();
        int k=n/4;
        int ans=n;
        unordered_map<char,int>mp;
        
        for(auto i:s){
            mp[i]++;
        }
        
        
        int i=0;
        for(int j=0;j<n;j++){
            mp[s[j]]--;
            
            while(i < n && mp['Q']<=k && mp['W']<=k && mp['E']<= k && mp['R']<=k)
			{
				ans = min(ans, j-i+1);      // line is to check and return for min length substring
				mp[s[i++]]++;
			}
		}
    return ans;   
    }
};
        
        
        
       