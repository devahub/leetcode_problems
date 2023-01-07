class Solution {
public:
    
    typedef long long ll;
    
    string categorizeBox(int l, int w, int h, int m) {
        long long res=ll(l)*ll(w)*ll(h);
        bool f=false,t=false;
        
        
        if(l>=10000 || h>=10000 || w>=10000 || res>=1000000000)
        {
              f=true;
        }
        
        
      if(m>=100){
          t=true;
      }
        
        if(f==true && t==true){
            return "Both";
        }
        else if(f==false && t==true){
            return "Heavy";
        }
        else if(f==true && t==false){
            return "Bulky";
        }
        else{
            return "Neither";
        }
        
    }
};