class Solution {
public:

    
    
    
      int maxArea(vector<int>& height){
          int l=0;
          int h=height.size()-1;
          int maxi=0;
          
          while(l<h){
              int lh=height[l];
              int rh=height[h];
              
              maxi=max(maxi,min(lh,rh)*(h-l));
              
              if(lh<rh){
                  l++;
              }
              else{
                  h--;
              }
              
          }
         return maxi;
      }
};