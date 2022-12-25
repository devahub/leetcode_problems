class Solution {
public:
    
    
    
    ////  if we get 89 then we will never get 1 as ans==true--->
    
int solve(int &n){  
     int res=0;
        while(n!=0){
            int d=n%10;
            res+=d*d;
            n=n/10;
        }
        return res;
    }
    
    
    bool isHappy(int n) {
        int t=n;
       while(true) {
        if(t==89)    
            return false;
        if(t==1)
            return true;
           
        t=solve(t);
       }
        
    }
};
   
    
    
    
    
    
    // using slow and fast pointer  because if we don't find 1 then we will get a cycle--->
    
//     int solve(int &n){  
//      int res=0;
//         while(n!=0){
//             int d=n%10;
//             res+=d*d;
//             n=n/10;
//         }
//         return res;
//     }
    
    
//      bool isHappy(int n) {
//             int slow=n;
//             int fast=n;
         
//          do{
//              slow= solve(slow);
//              fast=solve(fast);
//              fast=solve(fast);
             
//          }
         
//          while(slow!=fast);{
//              if(slow==1)
//                  return 1;
//              else{
//                  return 0;
//              }
//          }
//      }
// };
             