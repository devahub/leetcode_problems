class Solution {
public:
    
    
//    vector<vector<int>>ans;
//     void solve(vector<int>& can, int target,vector<int>&v,int i){
//           if(target==0){
//             ans.push_back(v);
//          return;
//         }
        
//        for(int j=i;j<can.size();j++){       
//         if(can[j]>target){          // using a for loop to avoid taking duplicate elements---->
//             break;
//         }
//            if(j  > i && can[j] == can[j-1]){
//                 continue;           // if case checking duplicate elements
//            }
           
//             v.push_back(can[j]);                    
//             solve(can,target-can[j],v,j+1);
//             v.pop_back();
//     }
//  }
    
//     vector<vector<int>> combinationSum2(vector<int>& can, int target) {
//         sort(can.begin(),can.end());
//         vector<int>v;
//         solve(can,target,v,0);
//         return ans;
//     }
// };
    
    
    
    
    void solve(vector<int>& arr, vector<vector<int>>& ans, vector<int>& v, int i, int sum)
{
        if(i >= arr.size() || sum <= 0)
        {
            if(sum == 0)
                ans.push_back(v);
            return;
        }
        
        // pick it
        v.push_back(arr[i]);
        solve(arr, ans, v, i+1, sum-arr[i]);
        v.pop_back();
        
        // ignore duplicate elements...
        while(i+1 < arr.size() && arr[i] == arr[i+1])
            i++;
        
        // don't pick it
        solve(arr, ans, v, i+1, sum);
}
    
    
    
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
{
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        solve(candidates, ans, v, 0, target);
        return ans;
}
};
    
    
    
    