class Solution {
public:
    
// using map------>    
    
//     vector<int> intersection(vector<vector<int>>& nums) {
//         map<int,int>mp;
//         int n=nums.size();
//         vector<int>v;
        
//         for(auto i:nums){
//             for(auto x:i){
//                 mp[x]++;
//                 if(mp[x]==n){
//                     v.push_back(x);
//                 }
//             }
//         }
//         sort(v.begin(),v.end());
//         return v;
//     }
// };
    
    vector<int> intersection(vector<vector<int>>& nums){
        vector<int>v(1001);
        vector<int>res;
        
        for(auto i:nums){
            for(auto x:i){
                v[x]++;
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==nums.size()){
                res.push_back(i);
            }
        }
        
        return res;
    }
};