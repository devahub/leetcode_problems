class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        int d;
       long int ans=0;
        
        if(x<0){
        return false;
        }
        
        
        
        while(t!=0){   
            d=t%10;
            ans=ans*10+d;
            t=t/10;
        }
        
        if(ans==x){
            return true;
        }
        else
        {
            return false;
        }
    }
};