class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int maxi=0;
        
        for(int i=0;i<nums.size();i++){
             
            int n_s=-1,n_e=-1,n=0,p=0,j;
              //n_s ->to store starting of negatiive number
              //n_e ->to store end of negative number
              //n   ->count of negative number
              //p   ->count of positive number

            
            for(j=i;j<nums.size();j++){
                    
                if(nums[j]<0){
                    n++;
                }
                if(nums[j]>0){
                    p++;
                }
                if(nums[j]<0 && n_s==-1) { 
                    n_s=j;
                }
                if(nums[j]<0) { 
                    n_e=j;
                }
                if(nums[j]==0) {
                    break;
                }
            }
            
            if(n%2==0){
                maxi=max(maxi,n+p);
            }
            if(n%2==1)
             {
                  maxi=max(maxi,j-n_s-1);
                  maxi=max(maxi,n_e-i);
             }
            i=j;
        }
    return maxi;  
    }
};