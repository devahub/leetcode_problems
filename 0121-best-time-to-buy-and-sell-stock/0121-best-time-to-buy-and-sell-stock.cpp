class Solution {
public:
    
    
    // brute force--->
    
//     int maxProfit(vector<int>& prices) {
//         int maxi=0;
//         for(int i=0;i<prices.size();i++){
//             for(int j=i+1;j<prices.size();j++){
//                 maxi=max(maxi,prices[j]-prices[i]);
//             }
//         }
//         return maxi;
//     }
// };
    
    
    
    
    
    // optimised approach---->
    
    //   [7,1,5,3,6,4] 
    
    
      int maxProfit(vector<int>& prices){
          int maxi=0;
          int mini=prices[0];
          
          for(int i=1;i<prices.size();i++){
              mini=min(mini,prices[i]);
              maxi=max(maxi,prices[i]-mini);
              
          }
                return maxi;
         
      }
};