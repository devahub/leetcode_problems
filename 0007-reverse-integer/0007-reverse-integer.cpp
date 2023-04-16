class Solution {
public:
  // 1st approach
    
    int reverse(int x) {
        long res=0;
        
        while(x!=0){
            int d=x%10;
            res=res*10+d;
            x=x/10;
            
        }
        
        if(res>INT_MAX || res<INT_MIN)   /// important line
            return 0;
        
    return res;      
    }
};
        
  
        // 2nd approach
        
        
//          int rev = 0;
        
//         while(x !=0) {
            
//             if( (rev > INT_MAX/10) || (rev < INT_MIN/10) ){
//                 return 0;
//             }
            
//             rev = (rev * 10) + (x % 10);
//             x /= 10;
//         }
        
//      return rev;   
//     }
// };