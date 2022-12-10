class Solution {
public:
    
    
    // start with brut force taking two loops i and j; j=i then check if product is less than k or not 
    
    
    // sliding window---->
    
     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int pr=1;
        int c=0;                       
        
        
        while(j<n)
        {
            if(pr*nums[j]<k){           // if the product is less than k--->
             {
                pr*=nums[j];
                c+=j-i+1;
                j++;     
                }
            }
         
          else{                         // else case-->
                if(i<j){
                    pr/=nums[i];
                }
              else{
                    j++;
                }
                i++;
            }
         }
        return c;
    }
};
    
    
    
    



    
    // binary search------>
    
    
//       int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
//         if(k<=1) 
//             return 0;
        
//         int n = nums.size();
//         double logk = log10(k);
        
//         vector<double>prefixSum(n+1,0.0);
//         int count = 0;        

        
//         for(int i=0;i<n;i++)
//             prefixSum[i+1] += log10(nums[i]) + prefixSum[i];
        
       
//         for(int i=0;i<n;i++)
//         {
//         int low = lower_bound(prefixSum.begin()+i+1, prefixSum.end(), prefixSum[i]+logk) - prefixSum.begin();
//             count+= low - i - 1;
//         }
    
//           return count;
//     }
// };
    
    
    