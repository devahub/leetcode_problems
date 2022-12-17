class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        
        for(int i=0;i<n;i++){
           if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/" && tokens[i]!="*"){
               st.push(stoi(tokens[i]));
               continue;
           }
            else{
                 long long ftop=st.top();
                st.pop();
                
                long long stop=st.top();
                st.pop();
                
        if(tokens[i]=="+")
        {
            st.push(stop+ftop);
        }
        else if(tokens[i]=="-")
        {
            st.push(stop-ftop);
        }
        else if(tokens[i]=="*")
        {
            st.push(stop*ftop);
        }
        else
        {
            st.push(stop/ftop);
        }

            }
        }
        return st.top();
    }
};