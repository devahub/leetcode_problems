class Solution {
public:

    
    
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<queries.size();i++){
            int sum=0;
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]+sum<=queries[i]){
                    c+=1;
                    sum+=nums[j];
            }
        }
         res.push_back(c);
            
        }
        
        return res;
    }
};
    
    
    
    
    
    /// using prefix sum ----->
    
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//     int n = nums.size();
//     int q = queries.size();
    
//     vector<int> ans(q);
    
//     sort(nums.begin(), nums.end());
    
//     //prefix sum
//     vector<int> preSum(n);
//     for (int i = 0, sum = 0; i < n; i++)
//     {
//         sum += nums[i];
//         preSum[i] = sum;
//     }
    
//     for (int i = 0; i < q; i++)
//     {
//         int j = 0;
//         while (j < n )
//         {
//             if (preSum[j] <= queries[i]) 
//             {
//                 j++;
//             }
//             else 
//                 break;
//         }
//        ans[i] = j;
//     }
//     return ans;
// }
// };