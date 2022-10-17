class Solution {
public:
//     bool checkIfPangram(string sentence) {
//         unordered_map<char,bool>mp;
//         for(auto i:sentence){
//             mp[i]=1;
//         }
//         return mp.size()==26;
//     }
// };
    
    
    
     bool checkIfPangram(string sentence){
         unordered_map<char,int>mp;
         for(auto i:sentence){
             mp[i]++;
         }
         if(mp.size()==26)return true;
         return false;
     }
};