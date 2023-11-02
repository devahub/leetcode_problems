class Solution {
public:
    
    
    
    void solve(vector<int>& nums,vector<vector<int>>&ans,vector<int>&v,int index){
        ans.push_back(v);
        
         for(int i=index;i<nums.size();i++){
            
            if(i>index &&  nums[i]==nums[i-1])
                continue;
            v.push_back(nums[i]);
            solve(nums,ans,v,i+1);
            v.pop_back();
        }
        
        
    }    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(nums,ans,v,0);
        return ans;
    }
};