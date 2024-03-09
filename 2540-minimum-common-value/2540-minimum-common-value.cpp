class Solution {
public:
    
    
   // brute force
    
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>v;
        
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
//                     v.push_back(nums1[i]);
//                 }
//             }
//         }
//         sort(v.begin(),v.end());
//         return v[0];
        
//     }
// };

    
    
  // map  
    
     int getCommon(vector<int>& nums1, vector<int>& nums2){
        unordered_map<int,int>mp;
         
        for(auto i:nums1){
            mp[i]++;
        } 
         
         
         for(auto i:nums2){
             if(mp[i]>0){
                 return i;
             }
         }
         
         
         
         return -1;
     }
};