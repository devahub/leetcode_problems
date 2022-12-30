class Solution {
public:
    


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
    
    
    
    
    
    
    
    
    
    
    // iterative soln--->
    //use two for loops and complete  iterations for every value of i 
    
//       vector<vector<int>> subsets(vector<int>& nums){
//           int n=nums.size();
//           vector<vector<int>>ans;
//           ans.push_back({});
          
//           for(int i=0;i<n;i++){
//               int size=ans.size();
              
//               for(int j=0;j<size;j++){
//                   vector<int>temp=ans[j];      // get the size
//                   temp.push_back(nums[i]);
//                   ans.push_back(temp);
                  
//               }
//           }
          
//           return ans;
//       }
// };


    
    
    
    
    
    
    // recurssive solution-----> backtracking solution---->
    
    
    void solve(vector<int>& nums,vector<vector<int>>&ans,vector<int>& v,int index){
        ans.push_back(v);
        
        for(int i=index;i<nums.size();i++){
            v.push_back(nums[i]);
            solve(nums,ans,v,i+1);
            v.pop_back();
        }
        
    }
    
  vector<vector<int>> subsets(vector<int>& nums){
      vector<vector<int>>ans;
      vector<int>v;
      solve(nums,ans,v,0);
      return ans; 
  }
};