#define all(x) x.begin(),x.end()

class Solution {
public:
    
    
//     i.e  abba -> ab + reverse(ab);
//  hence we will generate the palindrome of (intLength+1)/2 (first part ab)      
//  for both odd and even case.
 
//  Then in case of even length we will reverse string and return it 
//  In case of odd we will leave One as for odd i.e abdba -> ab + d + rev(ab)
    
   
    long long solve(long long n,int k){
        
        int half = (k+1)>>1;
        int starting = pow(10,half-1);
        int ending = pow(10,half)-1;
        
        if( n>(ending-starting+1) )
            return -1;
        
        string front = to_string(starting+n-1);
        
        string end;
     
        if(k%2){
            end=front.substr(0,half-1);
            reverse(all(end));
        }
        else{
            end=front.substr(0,half);
            reverse(all(end));
        }
        
         return stoll(front+end);
    }
    
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        vector<long long>ans;
        
        for(auto i:queries){
            ans.push_back(solve(i,intLength));   
        }
        return ans;
    }
};