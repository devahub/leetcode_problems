class Solution {
public:
    
    bool detectCapitalUse(string word) {
         if(word.length()==1)
            return true;
       
          
        if(word[0]>'a'){
            for(int i=1; word[i]; i++)
            {
                if(word[i]>='a' && word[i]<='z')
                    continue;
                else
                    return false;
            }
        
        }
        
     else{
        if(word[1]>='A' && word[1]<='Z')
                for(int i=2; word[i]; i++)
                {
                    if(word[i]>='A' && word[i]<='Z')
                        continue;
                    else
                        return false;
                }
            else
            {
                for(int i=2; word[i]; i++)
                {
                    if(word[i]>='a' && word[i]<='z')
                        continue;
                    else
                        return false;
                }
            }
    }
        return true;
        
    }
};