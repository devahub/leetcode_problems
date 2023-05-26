class Solution {
public:
    
    
    // brute force--->
    
//     int maxProduct(vector<int>& nums) {
//         int prod=nums[0];
//         int maxi=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             prod=nums[i];
//             for(int j=i+1;j<nums.size();j++){
               
//                 maxi=max(maxi,prod);
//                  prod*=nums[j];
//             }
//             maxi=max(maxi,prod);
//         }
//         return maxi;
//     }
// };
    
    
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int p=1;
        
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            maxi=max(maxi,p);
            if(p==0){
                p=1;
            }    
        }
        
        
        p=1;
        for(int j=nums.size()-1;j>=0;j--){
            p*=nums[j];
            maxi=max(maxi,p);
            if(p==0){
                p=1;
            }
        }
        return maxi;
    }
};
    
    