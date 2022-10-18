class Solution {
public:
   
   
    // c++ stl----->
    
//     double myPow(double x, int n) {
//     return pow(x,n);
//     }
    
    
    
    
    
    
    // tc------> O(logn) 
   double myPow(double x, int n) {
        
        if(n==0){                       // base case
            return 1;
        }
       
       
        if (n < 0) {                // if n is even---->
            n = abs(n);                // x=2 & n=-3====> x=1/2 & n=3
            x = 1/x;
        }
       
        if(n%2==0){                    // if n is even then ------>
            return myPow(x*x,n/2);         // x=2 & n=2====> 2*2
        
        }
       else{                           // if n is odd then----->
            return x*myPow(x*x,n/2);        // x=2 & n=3====> 2*2*2
        }
   }
       
};

