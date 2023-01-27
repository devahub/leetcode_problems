class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int sum=0;
        int n=num.size()-1;
            
        while(n>=0 || k!=0 || sum>0){
            if(k!=0){
                sum+=k%10;
                k=k/10;
            }
            if(n>=0){
                sum+=num[n];
                n--;
            }
            ans.push_back(sum%10);
            sum=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
    
    
    
    
    
    ///  another approach------>
    
    
//      vector<int> addToArrayForm(vector<int> num, int K) {
        
//          for(int i=num.size()-1;i>=0&&K>0;i--)
//             {
//             num[i]+=K;
//             K=num[i]/10;
//             num[i]%=10;
//             }
     
//          while(K>0)             ///  if any k is leaving then we will process it to beginning
//             {
//          num.insert(num.begin(),K%10);
//          K/=10;
//         }
         
//      return num;
//     }
// };