class Solution {
public:
    
    
    
//     int rangeBitwiseAnd(int left, int right) {
//         if ((left == 0) || (right == 0)) 
//               return 0;
        
//         if ((int)log2(left) != (int)log2(right)) 
//               return 0;
        
//         int res=left;
        
//         for(long i=left;i<=right;i++){
//                 res&=i;
//         }
        
//     return res;  
//     }
// };
    
    
    
    // using bit manipulatation------>
    
//       int rangeBitwiseAnd(int left, int right) {
    
//           return (right > left) ? (rangeBitwiseAnd(left/2, right/2) << 1) : left;
    
//       }
// };

    
    
    
// another approach----->

int rangeBitwiseAnd(int left, int right) {
        int c=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            c++;
        }
        return left<<c;
    }
};