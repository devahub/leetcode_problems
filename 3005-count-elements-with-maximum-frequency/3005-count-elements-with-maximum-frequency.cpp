class Solution {
public:
    
    int maxFrequencyElements(vector<int>& nums) {
        
       int maxi=INT_MIN; unordered_map<int,int>mp;
    
        for(auto i:nums){
            mp[i]++;
        }
        
        for(auto i:mp){
            maxi=max(maxi,i.second);
            
        }
        
        int c=0;
        for(auto i:mp){
            if(maxi==i.second){
                c+=maxi;
            }
        }
        
        
       return c; 
        
    }
};

//  1->2
    // 2->2
    // 3->1
    // 4->1