class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string>st;
        
        for(int i=0;i<word.size();i++){
            string temp="";
            if(isdigit(word[i])){
                while(word[i]=='0')
                    i++; 
                while(isdigit(word[i]))
                    temp+=word[i++];
            st.insert(temp); 
            }   
        }
        return st.size();
    }
};