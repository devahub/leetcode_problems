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
    
//      int getCommon(vector<int>& nums1, vector<int>& nums2){
//         unordered_map<int,int>mp;
         
//         for(auto i:nums1){
//             mp[i]++;
//         } 
         
         
//          for(auto i:nums2){
//              if(mp[i]>0){
//                  return i;
//              }
//          }
         
         
         
//          return -1;
//      }
// };
    
    
    
    
     int getCommon(vector<int>& nums1, vector<int>& nums2){
         
         int i=0;
         int j=0;
         
         
         while(i<nums1.size() && j<nums2.size()){
             
             if(nums1[i]==nums2[j]){
                 return nums1[i]; 
             }
             else if(nums1[i] < nums2[j]){
                 i++;
             }
             else{
                 j++;
             }
             
         }
         return -1;
         
         
     }
};