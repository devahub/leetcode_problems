class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        bool flag=true;
        int i=0;
        long res=0;
    
        while(i<n and s[i]==' '){       // skipping space
            i++;
        }
        
        if(s[i]=='+' )                  // seeing sign
            i++;
        else if(s[i]=='-')
        {
            flag=false;
            i++;
        }
        
        
        while(i<n){
            
            if(s[i]>='0' and s[i]<='9'){
            res=res*10+(s[i]-'0');
            if(res>=INT_MAX)
                break;
                                        }
            else
                break;
            i++;
        }
        
        if(!flag)
            res*=-1;
            
		if(res<=INT_MIN)
		    return INT_MIN;
		else if(res>=INT_MAX) 
		    return INT_MAX;
        
		return res;    
    }
};
    
 