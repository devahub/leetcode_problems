class Solution {
public:
    
//   vector<vector<int>> subsets(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>>ans;
//         ans.push_back({});
        
        
//         for(int i=0;i<n;i++){
//             int size=ans.size();
            
//             for(int j=0;j<size;j++){
//                 vector<int>v=ans[j];
//                 v.push_back(nums[i]);
//                 ans.push_back(v);    
//             }
//         }
//     return ans;
//     }
// };


//     vector<vector<int>>ans;
//     void solve(vector<int>& nums,int i,vector<int>temp){
        
//        if(i==nums.size()){
//            ans.push_back(temp);
//            return;
//        }
        
//         solve(nums,i+1,temp);
//         temp.push_back(nums[i]);
//         solve(nums,i+1,temp);   
        
//  }
  
//    vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>temp;
//         solve(nums,0,temp);
//         return ans;
            
//     }
// };
    
    
    
    
    
 //   approach--3>
   
    vector<vector<int>>ans;
    void helper(int index, vector<int>&current,vector<int>&nums)
    {
        ans.push_back(current); 
        
        for(int i=index;i<nums.size();i++)
        {
            current.push_back(nums[i]); 
            helper(i+1,current,nums); 
            current.pop_back(); 
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        helper(0,current,nums);
        return ans; 
    }
};