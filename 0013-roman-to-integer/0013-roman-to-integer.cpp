class Solution {
public:
    
    // dry run on paper and paper 
    
    
    int romanToInt(string s) {
         unordered_map<char,int>mp {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10},                                          {'V', 5}, {'I', 1}};
        
        int ans=0;
        int n=s.size();
        
        for(int i=0;i<n;){
            
            if(mp[s[i]]<mp[s[i+1]]){
                ans=ans+mp[s[i+1]]-mp[s[i]];
                i+=2;
            }
            else{
                
                ans=ans+mp[s[i]];
                i=i+1;
            }
            
        }
        return ans;
    }
};