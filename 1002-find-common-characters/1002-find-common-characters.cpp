class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       unordered_map<char, int> mp;
       vector<string>v;
        
        for(auto x: words[0]) 
            mp[x]++;
        
        for(int i=1; i<words.size(); i++){
           unordered_map<char, int> temp;
           
            for(auto y : words[i])
                temp[y]++;
            
            for(int i=0;i<26;i++){
                char ch='a'+i;
                
                if(temp.find(ch) != temp.end() && mp.find(ch) != mp.end())
                    mp[ch] = min(mp[ch], temp[ch]);
                else if(mp.find(ch) != mp.end()) 
                    mp.erase(ch);
            }
    }
    
        for(auto x:mp){
            string s="";
            s += x.first;
            for(int i=1; i<=x.second; i++) 
                v.push_back(s);
         } 
        
        return v;
    }
};