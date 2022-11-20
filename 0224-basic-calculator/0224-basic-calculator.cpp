class Solution {
public:
    int calculate(string s) {
        int res=0;
        int sign=1;
        int j=0;
        int len=s.length();
        stack<int> st;
        
        while(j<len){
            if(s[j]=='+')
            {
                sign=1;
            }
            else if(s[j]=='-')
            {
                sign=-1;
            }
            
            else if(isdigit(s[j]))
            {
                int num=s[j]-'0';
                while(j+1<len && isdigit(s[j+1])){
                    num=num*10+(s[j+1]-'0');
                    j++;
                }
                res+=num*sign;
            }
            
            else if(s[j]=='(')
            {
                st.push(res);
                st.push(sign);
                res=0;
                sign=1;
            }
            else if(s[j]==')')
            {
                int xsign=st.top();
                st.pop();
                int xresult=st.top();
                st.pop();
             
                res=res*xsign + xresult;
            }
            j++;
        }
        return res;
    }
};