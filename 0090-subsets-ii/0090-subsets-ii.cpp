class Solution {
public:
    
    // using set-------> not very much optimised--->
    
     void solve(vector<int>&nums, int i, vector<int>v, set<vector<int>>&st) 
    {
        if(i == nums.size()) 
        {
            sort(v.begin(), v.end());
            st.insert(v);
            return;
        }
        
        v.push_back(nums[i]);
        solve(nums, i + 1, v, st);
        v.pop_back();
        solve(nums, i + 1, v, st);
    }
    
    vector<vector<int>>subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>v;
        
        solve(nums, 0, v, st);
        
        for(auto i : st){
            ans.push_back(i);
        }
        return ans;
    }
};
    
    
    
    
    
    
    
    
    
    
   // optimal solution-----> 
    
//     void solve(vector<int>& nums,vector<vector<int>>&ans,vector<int>&v,int index){
        
//         ans.push_back(v);
//         for(int i=index;i<nums.size();i++){
            
//             if(i>index &&  nums[i]==nums[i-1])
//                 continue;
//             v.push_back(nums[i]);
//             solve(nums,ans,v,i+1);
//             v.pop_back();
//         }
       
//     }
    
    
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>v;
//         sort(nums.begin(),nums.end());
//         solve(nums,ans,v,0);
//         return ans;
//     }
// };