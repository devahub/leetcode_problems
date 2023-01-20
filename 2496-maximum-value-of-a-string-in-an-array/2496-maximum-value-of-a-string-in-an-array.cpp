class Solution {
public:
    int maximumValue(vector<string>& strs) {
    
        int maxi=INT_MIN;
     int x;
      for(auto i:strs)
      {
          int c=0;
          for(auto j:i){
              if(j>='a' and j<='z'){
                  c++;
                  break;
              }
          }
          if(c>0){
              int sz=i.size();
              if(maxi<sz){
              maxi=i.size();
              }
          }
          else{
              x=stoi(i);
              maxi=max(maxi,x);
          }
      }
        
        return maxi;
    }
};