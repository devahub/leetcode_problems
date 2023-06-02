class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string res="";
       int d=max(n1,n2);
        
        for(int i=0;i<d;i++){
           if(n1>0){
               res+=word1[i];
               n1--;
           }
            if(n2>0){
                res+=word2[i];
                n2--;
            }
            
        }
        
        return res;
    }
};