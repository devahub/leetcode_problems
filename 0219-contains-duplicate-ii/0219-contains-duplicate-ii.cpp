class Solution {
public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
        
//         for(int i=0;i<nums.size();i++){
//             if(mp.find(nums[i])==mp.end())
//                 mp[nums[i]]=i;
//             else{
//                 if(abs(i-mp[nums[i]])<=k)return true;
//                 else 
//                 {
//                     mp[nums[i]]=i;
//                 }
//             }
//         }
//         return false;
//     }
// };
    
    
    
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         vector<pair<int,int>>v;
         for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end());
        for(int i=0;i<nums.size()-1;i++){
            if(v[i].first==v[i+1].first && abs(v[i].second-v[i+1].second)<=k){
                return true;
            }
        }
        return false;
    }
};