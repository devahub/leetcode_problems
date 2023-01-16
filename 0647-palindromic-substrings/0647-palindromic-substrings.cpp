class Solution {
public:
    
    
    // brute force----->
    
   	// bool isP(string s){
	// 	string t =s;
	// 	reverse(s.begin(), s.end());
	// 	return s==t;
	// }
    
    
	// int countSubstrings(string s) {
        // int n = s.size();
		// int count= n;                  
		// for(int i = 0; i<n-1; i++){
		// 	for(int j = i+1; j<n; j++){
		// 		string p = s.substr(i, j-i+1);                   
		// 		if(isP(p)){
		// 			count++;
		// 		}
		// 	}
		// }
		// return count;
    
    
    
    
    ///  approach---->2  using dp----->
    
    int dp[1002][1002];
    int isPal(string s,int i,int j) { 
        if(i>=j) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] != s[j])
            return dp[i][j] = 0;
        return dp[i][j] = isPal(s,i+1,j-1);
    }
    
    int countSubstrings(string s) {
       int ans = 0;
       memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<s.length();i++) {
            for(int j=i;j<s.length();j++) {
                if(isPal(s,i,j)){
                ans++;
                }
            }
        }
        return ans;
	}
};