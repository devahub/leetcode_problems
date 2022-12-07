class Solution {
public:
    
    
    
//     bool validMountainArray(vector<int>& nums) {
//         int n=nums.size();
//         if(n< 3) return false;

//         int i;
//         for(i=1;i<n;i++){
//             if(nums[i]<nums[i-1]){
//                 break;
//             }
//             if(nums[i]==nums[i-1])return false;
//         }
//         if(i==n || i==1) return false;

//         for(int j=i+1;j<n;j++){
//             if(nums[j]>=nums[j-1]){
//                 return false; 
//             }
//         }
//        return true;

//     }
// };

    
    
    
    
    
    // another approach--->

 bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n< 3) return false;
        
        int l = 0;
        int r = n- 1;
        
        while(l + 1 < n-1 && arr[l] < arr[l + 1])
            l++;
        while(r - 1 > 0 && arr[r] < arr[r - 1])
            r--;
        return l == r;   
           
    }
};