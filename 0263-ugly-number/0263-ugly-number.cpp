class Solution {
public:
    bool isUgly(int n) {
        //recurssively
        
        
        if(n==0)return false;
        if(n==1)return true;
        
        if(n%2==0)
            return isUgly(n/2); 
        if(n%3==0)
            return isUgly(n/3);
        if(n%5==0)
            return isUgly(n/5);
                
        else
             return false;
        
    }
};