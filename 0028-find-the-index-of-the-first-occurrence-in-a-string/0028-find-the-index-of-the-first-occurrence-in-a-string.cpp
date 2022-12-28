class Solution {
public:
       // for used because haystack may be===saybutsad and needle can be but
        // then we have to increase the value of i nad check upto size of needle
   
    
    int strStr(string haystack, string needle) {
       int n=needle.size();
      
        if(haystack.size()<needle.size())
            return -1;
        
        for(int i=0;i<=haystack.size()-n;i++){
           if(haystack.substr(i,n)==needle){
               return i;
           }
       }
        
        return -1;
    }
};