class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       unordered_map<char, int> mp1;
       vector<string>v;
        
        for(auto x: words[0]) 
            mp1[x]++;
        
        for(int i=1; i<words.size(); i++){
           unordered_map<char, int> temp;
           
            for(auto y : words[i])
                temp[y]++;
            
            for(int i=0;i<26;i++){
                char ch='a'+i;
                
                if(temp.find(ch) != temp.end() && mp1.find(ch) != mp1.end())
                    mp1[ch] = min(mp1[ch], temp[ch]);
                else if(mp1.find(ch) != mp1.end()) 
                    mp1.erase(ch);
            }
    }
    
        for(auto x:mp1){
            string s="";
            s += x.first;
            for(int i=1; i<=x.second; i++) 
                v.push_back(s);
         } 
        
        return v;
    }
};