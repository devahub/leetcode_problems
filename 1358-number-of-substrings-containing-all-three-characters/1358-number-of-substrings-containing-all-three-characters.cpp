class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int cnt=0;
        int i=0;
        int j=0;
        int n=s.size();
        
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()<3){
                j++;
            }
            
            else{
                while(mp.size()==3){//count all those substrings having more freq of char but same size
                cnt+=n-j; 
                mp[s[i]]--;
                if(mp[s[i]]==0) 
                    mp.erase(s[i]);
                i++;     
            }
        j++;
        }
    }
        
        return cnt;
    }
};