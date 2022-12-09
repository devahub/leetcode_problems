class Solution {
public:
    
        // refer aditya verma sliding window
    
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        unordered_map<char,int>mp;
        
        for(auto i:p)
        {
            mp[i]++;
        }
        
        int k=p.size();
        int c=mp.size();
        int i=0,j=0;
        
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    c--;
            }
            
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(c==0)
                    v.push_back(i);
                
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1)
                        c++;
                }
            i++;
            j++;
         }
        }
       return v; 
        }
};
    
    
  