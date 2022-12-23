class Solution {
public:
    
    // using extra space---->
    
//     int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>v(n,-1);
        
//         for(int i=0;i<n;i++){
//             if(nums[i]>0 && nums[i]<=n){
//                 v[nums[i]-1]=1;
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             if(v[i]==-1){
//                 return i+1;
//             }
//         }
//         return n+1;
      
//     }
// };
    
    
    

    // without using space----->swapping 
//     So bring all the elements to their respective position
// i.e if the element is 3 bring it to 3rd position or 2nd index.
    
     int firstMissingPositive(vector<int>& nums) {
         
        int n=nums.size();
        for(int i=0 ; i<n ; i++)
        {
            while(nums[i]>0 and nums[i]<=n and nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
         
        
        for(int i=0 ; i<n ; i++) {
            if(nums[i] != i+1)
                return i+1;
        }
        return n+1;
    }
};