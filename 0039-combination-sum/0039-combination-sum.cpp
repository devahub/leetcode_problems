class Solution {
public:
    
     void solve(vector<int>& can, int target,vector<int>&v,vector<vector<int>>&ans,int index)
    {
        if(index==can.size()){
                if(target==0){
                    ans.push_back(v);
                }
                return;
        }
        
        if(can[index]<=target){
                v.push_back(can[index]);
                solve(can,target-can[index],v,ans,index);
                v.pop_back();
            }
            // not pick
            solve(can,target,v,ans,index+1);
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
            vector<vector<int>>ans;
            vector<int>v;
            solve(can,target,v,ans,0);
            return ans;   
    }
};