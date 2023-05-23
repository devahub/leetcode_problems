class Solution {
public:
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         set<vector<int>> set;
//         vector<vector<int>> output;
//         for(int i=0; i<n-3; i++){
//             for(int j=i+1; j<n-2; j++){
//                 for(int k=j+1; k<n-1; k++){
//                     for(int l=k+1; l<n; l++){
//                         if((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + 
//                         (long long)nums[l] == target){
//                             set.insert({nums[i], nums[j], nums[k], nums[l]});
//                         }
//                     }
//                 }
//             }
//         }
//         for(auto it : set){
//             output.push_back(it);
//         }
//         return output;
//     }
// };
    
    
    
    
    
     vector<vector<int>> fourSum(vector<int>& nums, int target){
            vector<vector<int>> ans;
            sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i=0; i<n; ++i){
            
            long long remain = target - nums[i];
            
            for(int j = i+1; j < n; ++j){
                int left = j+1, right = n-1;
                long long remain2 = remain - nums[j];
                
                while(left < right){
                    if((nums[left] + nums[right]) < remain2) 
                        left++;
                    else if((nums[left] + nums[right]) > remain2) 
                        right--;
                    else{
                       
                        int x = nums[left]; 
                        
                        int y = nums[right];
                        
                        
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]}); 
                        
                       
                        while(left < right && nums[left] == x)
                            ++left;
                        

                        while(left < right && nums[right] == y) 
                            --right;
                    
                    }         
                }
                
        
                while(j + 1 < n && nums[j + 1] == nums[j])  //check duplicate of nums[j]
                    ++j;
            }
            
         
            while(i + 1 < n && nums[i + 1] == nums[i])  // check duplicate of nums[i]
                ++i;
        }
        
        return ans;
     }
};