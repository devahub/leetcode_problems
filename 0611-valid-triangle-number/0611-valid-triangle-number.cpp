class Solution {
public:
    
    /// brute force------>
    
//      int triangleNumber(vector<int>& a) {
//         sort(a.begin(), a.end());
//         int ans=0, n = a.size();
    
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                     for(int k=j+1; k<n; k++){
//                         if(a[i]+a[j]>a[k]){
//                           
//                              ans++;
//                         }
//                         else    break;
//                     }
//             }
//         }
//         return ans;
//     }
// };
    
    
    
    
    
    
    // using two pointers---->
    
    
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        
       for(int k=2;k<n;k++){
           int i=0;
           int j=k-1;
           
           while(i<j){
               if(nums[i]+nums[j]>nums[k]){
                   ans+=j-i;
                   j--;
               }
              else{
                  i++;
              } 
           }
       }
        return ans;
    }
};