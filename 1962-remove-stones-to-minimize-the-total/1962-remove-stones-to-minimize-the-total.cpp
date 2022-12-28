class Solution {
public:
    
    // brute force---->TLE
    
//     int minStoneSum(vector<int>& piles, int k) {
//         int n=piles.size();
//         sort(piles.begin(),piles.end());
//         int i=piles.size()-1;
       
//              while(k!=0){
//              piles[i]-=piles[i]/2;
//              sort(piles.begin(),piles.end());
//            k--;
//        }
//              return accumulate(piles.begin(),piles.end(),0);
//     }
// };
    
    
    
    
     int minStoneSum(vector<int>& piles, int k){

         int x;
         int sum=0;
         priority_queue<int>pq;
         
         for(int i=0;i<piles.size();i++){
             pq.push(piles[i]);
            }
         
         while(k--){
            x=pq.top();
            pq.pop();
            x-=floor(x/2);
            pq.push(x);
         }
         
         
          while(!pq.empty()){
            sum+=pq.top();
            pq.pop();    
        }
        return sum;
         
         
         return sum;
     }
};