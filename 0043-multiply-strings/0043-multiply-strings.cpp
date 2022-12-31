class Solution {
public:
   string multiply(string nums1, string nums2) {
        vector<int>v(nums1.size()+nums2.size());
        
        if(nums1=="0" || nums2=="0"){
            return "0";
        }
        
        for(int i=nums1.size()-1;i>=0;i--)
            {
                for(int j=nums2.size()-1;j>=0;j--)
                {
                    v[i+j+1]+=(nums1[i]-'0') * (nums2[j]-'0');
                    v[i+j] +=v[i+j+1]/10;                       // add carry to one previous number
                    v[i+j+1]%=10;                              
                }
            }
            
                
            int i=0;
            while (i < v.size() and v[i] == 0){
                i++;    
            }
        
        string ans="";
        while(i<v.size()){
            ans+=v[i]+'0';
            i++;
        }
        
        
        return ans;
    }        
};
    
    
