class Solution {
public:
    // approach 1---->addition
    
//     The idea here is to use addition efficiently to compute the final result...
// we know that division can be done using addition or subtraction...
// for example 20/3 = 3+3+3+3+3+3+(2, ignored) (result is 6 times 3 hence 6)

// Hence the loop is run, n times where n is our result...
// To more efficiently compute this, we can reduce the loops to log n time by adding divisor everytime it is added on...

// So 20/3 = 3 + 6 + 12 + (24, ignore) (curr result is 2^(3-1)=4, 3 here is number of iterations...)
// left over sum, 20-12 = 8, and we repeat the process...
// So 8/3 = 3 + 6 + (12, ignore) (this time result is 2^(2-1)=2, 2 here is number of iterations...)
// left over sum, 8-6 = 2, since 2 is less than 3, we terminate the process...

// Hence final result is 4+2 = 6
    
    int divide(int dividend, int divisor) {
        
     if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        
        int res=0;
        
        long int dd = abs(dividend), dv = abs(divisor);
        while(dv<=dd){
           long int sum=dv,c=1;
            while(sum<dd-sum){
           
            sum+=sum;
            c+=c; 
        }
        res+=c;
        dd-=sum;
    }
    
        
        if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -res;
        
        return res;
    }
};