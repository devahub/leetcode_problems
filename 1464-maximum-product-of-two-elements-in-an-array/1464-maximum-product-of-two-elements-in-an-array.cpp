class Solution {
public:
//     int maxProduct(vector<int>& nums) {
//         int maxi=0;
//         int pr=1;
        
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 pr=(nums[i]-1)*(nums[j]-1);
//                 maxi=max(maxi,pr);
//             }
//         }
        
//         return maxi;
//     }
// };
    
    
    
    
    
    /// using priority queue
    
    
    
    
      int maxProduct(vector<int>& nums) {
            int n=nums.size();
          priority_queue<int,vector<int>,greater<int>>pq;
          
          for(int i=0;i<n;i++){            // we will get largest and second largest number
              pq.push(nums[i]);
              if(pq.size()>2){
                  pq.pop();
              }
          }
          int pr=1;
          while(!pq.empty()){
              pr*=pq.top()-1;
              pq.pop();
          }
          return pr;
          
                    
          
          
      }
};