class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        unordered_map<int,int>mp;
//         vector<int>v;
        
//         for(auto i:nums1){
//             mp[i]++;
//         }
//         for(int i=0;i<nums2.size();i++){
            
//         if(mp.find(nums2[i])!=mp.end()){
//             if(mp[nums2[i]]!=0)             //condn is used to prevent from repeated nos
//                 v.push_back(nums2[i]);
//             mp[nums2[i]]=0;
//         }    
//         }   
//         return v;
//     }
// };
        vector<int> v;
        set<int> s;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                }
            }
        }
        for (auto i:s){
            v.push_back(i);
        
        }
        return v;
    }
};