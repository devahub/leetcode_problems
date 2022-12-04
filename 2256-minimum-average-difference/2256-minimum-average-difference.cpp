class Solution {
public:
    
    // brute force----->
    
//     int minimumAverageDifference(vector<int>& nums) {
//         int n = nums.size();
//         vector<long long>numsleft(n);
//         vector<long long>numsright(n);
//         vector<int>v(n);
//         int mini=INT_MAX;
//         int ans=0;
        
//          numsleft[0] = nums[0];
//         for(int i=1; i<n; i++){
//             numsleft[i] = numsleft[i-1] + nums[i];
            
//         }
        
//         numsright[n-1] = nums[n-1];
//         for(int i=n-2; i>=0; i--){
//             numsright[i] = numsright[i+1] + nums[i];
            
//         }
        
//        int abso;
//         for(int i=0; i<n-1; i++){
//             int leftavg = numsleft[i]/(i+1);
//             int rightavg = numsright[i+1]/max(n-i-1, 1);
//             abso = abs(leftavg - rightavg);
//             v[i] = abso;
//         }
        
//         v[n-1] = numsleft[n-1]/n;
        
//         for(int i=0;i<n;i++){
//             if(mini> v[i]){
//                 mini = v[i];
//                 ans = i;
//         }
//     }
//     return ans; 
//     }
// };
    
    
    
    
    // more optimal----> saving space------>
    
    
      int minimumAverageDifference(vector<int>& nums){
          int n=nums.size();
        
        long long right_sum = 0;
        for(auto it:nums) right_sum += it;
        
        int mini = INT_MAX;
        int idx = 0;
        
        long long left_sum = 0;
        
        for(int i=0; i<n; i++)
        {
            left_sum += nums[i];
            right_sum -= nums[i];
            
            long long first = (left_sum/(i+1));
    
            long long last = i<n-1 ? (right_sum/(n-i-1)) : 0;
            
            int diff = abs(first - last);
            
            if(diff < mini)
            {
                mini = diff;
                idx = i;
            }
        }
        
        return idx;
          
          
          
          
          
      }
};