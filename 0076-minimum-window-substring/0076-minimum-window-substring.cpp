class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        
        string ans;
        int mini=INT_MAX;
        
        for(auto i:t){
            mp[i]++;
        }
        int c=mp.size();
        int i=0;
        int j=0;
        int n=s.size();
        
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if (mp[s[j]] == 0)
                {
                    c--;
                }
            }
            while(c==0){
                if(mini>j-i+1){
                    mini=min(mini,j-i+1);
                    ans=s.substr(i,j-i+1);
                    
                }
                if (mp.find(s[i]) != mp.end())
                {
                    mp[s[i]]++;
                    if (mp[s[i]] == 1)
                    {
                        c++;
                    }
                }
                i++;
            }
            j++;
        }
       return ans; 
    }
};