class Solution {
public:
//     string baseNeg2(int n) {
//         string ans;
//         if(n==0)return "0";
        
//         while(n!=0){
//             int temp=n%(-2);
//             n=n/(-2);
            
//             if(temp<0){
//                temp+=2;
//                 n++;
//             }
//          ans.insert(ans.begin(),temp+'0');   
//         }
//         return ans;
//     }
// };
    
    
    
    
    
    
    
    
    
     string baseNeg2(int n) {
        string ans="";
        if(n==0)
            ans+=('0');
        int r;
        while(n){
            r=n%(-2);
            if(r<0){
                r+=2;
                n=n/(-2)+1;
            }else
                n/=(-2);
            ans+=(r+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};