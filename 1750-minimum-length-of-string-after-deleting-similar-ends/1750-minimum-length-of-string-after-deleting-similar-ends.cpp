class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            
            if(s[i]==s[j]){
               while(s[i]==s[i+1] && i<j){
                   i++;
               } 
                i++;
                while(s[j]==s[j-1] && i<j){
                    j--;
                }
                j--;
            }
            
            else{
                break;
            }   
        }
        
        
       if(j<i){
            return 0;
        }
        return j-i+1;
    }
};


//          aabcc  abba
//   abba