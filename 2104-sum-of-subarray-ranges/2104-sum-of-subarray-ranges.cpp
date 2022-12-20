class Solution {
public:
    
    // brute force---->
    
//     long long subArrayRanges(vector<int>& nums) {
       
//         long long ans=0;
//         for(int i=0;i<nums.size();i++){
//             int mini=nums[i];
//             int maxi=nums[i];
            
//             for(int j=i;j<nums.size();j++){
//                 mini=min(mini,nums[j]);
//                 maxi=max(maxi,nums[j]);
//                 ans+=maxi-mini;
//             }
//         }    
//     return ans;
//     }
// };
    
    
    
    
  // using stack---->  
    
     long long subArrayRanges(vector<int>& nums){
        stack<int> increaseStk;
        stack<int> decreaseStk;
        int n = nums.size();
        vector<int> leftLess(n);
        vector<int> rightLess(n);
        vector<int> leftLarger(n);
        vector<int> rightLarger(n);
         
        // 1. Initialize
        for(int i=0; i<n; i++){
            leftLess[i] = leftLarger[i] = i+1;
            rightLess[i] = rightLarger[i] = n-i;            
        }
         
        // 2. Find leftLess and rightLess
        for(int i=0; i<n; i++){
            while(!increaseStk.empty() && nums[increaseStk.top()] > nums[i]){
                rightLess[increaseStk.top()] = i - increaseStk.top();
                increaseStk.pop();
            }
            leftLess[i] = increaseStk.empty() ? i + 1 : i - increaseStk.top();
            increaseStk.push(i);
        }
         
        // 3. Find leftLarger and rightLarger
        for(int i=0; i<n; i++){
            while(!decreaseStk.empty() && nums[decreaseStk.top()] < nums[i]){
                rightLarger[decreaseStk.top()] = i - decreaseStk.top();
                decreaseStk.pop();
            }
            leftLarger[i] = decreaseStk.empty() ? i + 1 : i - decreaseStk.top();
            decreaseStk.push(i);
        }
         
        // 4. accumulate sum of (larger - less) of nums[i]
        long long sum = 0;
        for(int i=0; i<n; i++){
            long long curDiff = leftLarger[i]*rightLarger[i] - leftLess[i]*rightLess[i];
            sum += nums[i] * curDiff;
        }
        return sum;     
     }
};