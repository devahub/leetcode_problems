class Solution {
public:
//     int bulbSwitch(int n) {
//         if(n==0)return 0;
        
//         int c=0;
//         for(long long i=1;i<=n;i++){
//             if(i*i<=n){
//                 c++;
//             }
//         }
//         return c;
//      }
// };
    
    
    
     int bulbSwitch(int n) {
        return floor(sqrt(n));
    }
};


