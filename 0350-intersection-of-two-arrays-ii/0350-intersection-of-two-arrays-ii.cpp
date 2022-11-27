class Solution {
public:
//  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//          unordered_map<int,int>mp;
//         vector<int>v;
        
//         for(auto &i:nums1){
//             mp[i]++;
//         }
//        for(int j=0;j<nums2.size();j++){
          
//            if(mp[nums2[j]]>0){
//                mp[nums2[j]]--;
//                v.push_back(nums2[j]);
//            }
//        }
        
//         return v;
        
        
   vector<int> intersect(vector<int>& nums1, vector<int>& nums2){      
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        vector<int> res;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;
				j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
        }
        return res;
    }
};