class Solution {
public:
 
    
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
        
    }
};
    
    
   
    
//     int removeDuplicates(vector<int>& nums) {    
    
//     vector<int>ans;
//     unordered_map<int,int>mp;
//     for(int i=0;i<nums.size();i++){
//         if(mp[nums[i]]==0){
//             ans.push_back(nums[i]);
//               mp[nums[i]]++;
//         }
//      }
//         nums=ans;
//         return ans.size();
        
//     }
// };