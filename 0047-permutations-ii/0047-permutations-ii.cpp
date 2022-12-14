class Solution {
public:
    

        
//      using next_permutation c++ stl----> 
        
//         vector<vector<int>>ans;
        
//         sort(nums.begin(),nums.end());
        
//         do{
//           ans.push_back(nums);  
//         }
        
//         while(next_permutation(nums.begin(),nums.end()));
        
//         return ans;
//     }
// };
        
    
    
    
    
       // using swap function-----> backtracking solution--->
     
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        
        if (index == nums.size()) {             // base case
            ans.push_back(nums);
        }
        
        
        for (int i = index; i < nums.size(); ++i) {
            if (i != index && nums[i] == nums[index])
                continue;
            swap(nums[i], nums[index]);
            solve(nums, ans, index + 1);
        }
    }

        
    
    
   vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(begin(nums), end(nums));
        solve(nums, ans, 0);
        return ans;
    }
};
   