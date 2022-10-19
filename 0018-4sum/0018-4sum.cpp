class Solution {
public:
    
           // brute force----->     
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//          int n=nums.size();
//         sort(nums.begin(),nums.end());
//         set<vector<int>>sv;
//         for(int i=0;i<n;i++){
            
//             for(int j=i+1;j<n;j++){
                
//                 for(int k=j+1;k<n;k++){
                    
//                     int chk=(long long)target-((long long)nums[i]+(long long)nums[j]+(long long)nums[k]);
                    
//                     if(binary_search(nums.begin()+k+1,nums.end(),chk)){
                        
//                         vector<int>v;
//                         v.push_back(nums[i]);
//                         v.push_back(nums[j]);
//                         v.push_back(nums[k]);
//                         v.push_back(chk);
                        
                        
//                         sort(v.begin(),v.end());
//                         sv.insert(v);
//                     }
//                 }
//             }
//             }
//         vector<vector<int>>ans(sv.begin(),sv.end());
//         if(ans.size()>1){
//             return ans;
//         }
//         return {};
        
//     }
// };
            
    // two pointer approach---->
    
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
                        
                       
                        while(left < right && nums[left] == x) ++left;
                        

                        while(left < right && nums[right] == y) --right;
                    
                    }         
                }
                
        
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            
         
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        
        return ans;
     }
};
    
    
    