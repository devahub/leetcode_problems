class Solution {
public:
   int fib(int n) {
        if(n==0 || n==1) return n;
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
            int curr_i = prev2+prev;
            prev2=prev;
            prev=curr_i;
        }
        return prev;
    }
};