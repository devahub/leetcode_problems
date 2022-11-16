class Solution {
public:
    bool pal(string s){
        string p=s;
        reverse(s.begin(),s.end());
        return s==p;
        }
    
    
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2;i<=n-2;i++){
            string s="";
            int k;
            while(n!=1){
                k=k+n%i;
                n=n/i;
                s+=to_string(k);
            
            }
            if(!pal(s))
                return false;
        }    
        return true;
    }
};