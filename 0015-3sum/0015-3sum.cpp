class Solution {
public:
    
    // using two pointers------>
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || i>0 && nums[i]!=nums[i-1])
            {
            int low=i+1;
            int hi=nums.size()-1;
            int sum=0-nums[i];
                
            while(low<hi){
                if(nums[low]+nums[hi]==sum){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[low]);
                    v.push_back(nums[hi]);
                    res.push_back(v);
      
                     while(low<hi && nums[low]==nums[low+1])
                        low++;
                     while(low<hi && nums[hi]==nums[hi-1])
                         hi--;
                low++;
                hi--;
                    }
            
                else if(nums[low]+nums[hi]<sum)
                    low++;
                else 
                {
                    hi--;
                }
            }
        }
    }
        
    return res;    
    }
};
    
    
    
    
    
    
    // using hashmap------>
    
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin() , nums.end());     
//         if(nums.size() < 3){              
//             return {};
//         }
//         if(nums[0] > 0){                    
//             return {};
//         }
        
//         unordered_map<int , int>mp;
//         for(int i = 0 ; i < nums.size() ; ++i){    
//             mp[nums[i]] = i;
//         }
//         vector<vector<int>> ans;
        
//         for(int i = 0 ; i < nums.size() - 2 ; ++i){     
//             if(nums[i] > 0){    
//                 break;
//                   }
            
//             for(int j = i + 1 ; j < nums.size() - 1 ; ++j){     
//                 int required = -1*(nums[i] + nums[j]);   
//                 if(mp.count(required) && mp.find(required)->second > j){
//                     ans.push_back({nums[i] , nums[j] , required});
//                 }
//                 j = mp.find(nums[j])->second;
//             }
//             i =mp.find(nums[i])->second;     
//         }
        
//         return ans;  
//     }
// };
    
    