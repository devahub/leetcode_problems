class Solution {
public:
    
    
//     bool isPowerOfTwo(int n) {
//         if(n==1)return true;
//         if(n<1)return false;
        
//         if(n%2!=0)
//             return false;
        
//         return isPowerOfTwo(n/2);
//     }
// };
    
    
    
    
     bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;
    }
};