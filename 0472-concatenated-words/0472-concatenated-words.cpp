class Solution {
public:
    
    
    set<string>s;
    
    bool check(string word){
        for(int i=1;i<word.size();i++){
             string prefixWord = word.substr(0, i);
             string suffixWord = word.substr(i, word.length()-i);
            
    if(s.find(prefixWord) != s.end() && (s.find(suffixWord) != s.end() || check(suffixWord)))
                return true;        
        }
        return false;
    }
    
    
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>ans;
        
        for(auto i:words){
            s.insert(i);
        }
        for(auto i:words){
            if(check(i)==true){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};