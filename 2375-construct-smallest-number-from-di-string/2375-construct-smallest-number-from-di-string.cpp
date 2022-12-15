class Solution {
public:
    string smallestNumber(string pattern) {
        string s="";
        for(int i=1;i<=pattern.size()+1;i++){
            s+=to_string(i);
        }
        
        
        for(int i=0;i<pattern.size()+1;i++){
            for(int j=0;j<pattern.size();j++){
                if(pattern[j]=='I'){
                    if(s[j]>s[j+1]){
                        swap(s[j],s[j+1]);
                        
                    }
                }
                else{
                    if(pattern[j]=='D'){
                        if(s[j]<s[j+1]){
                            swap(s[j],s[j+1]);
                        }
                    }
                }
            }
        }
        return s;
    }
};