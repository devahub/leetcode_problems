class Solution {
public:
    
    ////      
    
    
//     string customSortString(string order, string s) {
//         unordered_map<char,int>mp;
//         string res="";
        
//         for(auto i:s){
//             mp[i]++;
//         }
        
        
        
//        for(auto i:order){
//            if(mp.find(i)!=mp.end()){
//                 res.append(mp[i], i);
//                mp.erase(i);
//            }
           
           
           
//        }
//          for(auto &it : mp){
//             res.append(it.second,it.first);
//         }
        
        
//         return res;
        
//     }
// };
    
    
    
    
    
    
// same method====>
    
    
    string customSortString(string order, string str) 
    {
        unordered_map<char,int> mp;
        for(auto i:str)
            mp[i]++;
        string res;
        for(auto i:order)
        {
            res+=string(mp[i],i);
            mp[i]=0;
        }
        for (auto i : mp) {
            res += string(i.second, i.first);
        }
        return res;
    }
};