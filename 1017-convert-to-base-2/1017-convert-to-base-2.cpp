class Solution {
public:
    string baseNeg2(int n) {
        string ans;
        if(n==0)return "0";
        
        while(n!=0){
            int temp=n%(-2);
            n=n/(-2);
            
            if(temp<0){
               temp+=2;
                n++;
            }
         ans.insert(ans.begin(),temp+'0');   
        }
        return ans;
    }
};