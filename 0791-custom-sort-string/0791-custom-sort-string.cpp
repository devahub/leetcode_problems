class Solution {
public:
    
    ////      
    
    
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        string res="";
        
        for(auto i:s){
            mp[i]++;
        }
        
        
        
       for(auto i:order){
           if(mp.find(i)!=mp.end()){
                res.append(mp[i], i);
               mp.erase(i);
           }
           
           
           
       }
         for(auto &it : mp){
            res.append(it.second,it.first);
        }
        
        
        return res;
        
    }
};