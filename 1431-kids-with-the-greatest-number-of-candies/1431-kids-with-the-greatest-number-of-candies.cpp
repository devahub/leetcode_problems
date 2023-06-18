class Solution {
public:
    
    
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int maxi=INT_MIN;
        vector<bool>v;
        
        for(auto i:candies){
            maxi=max(maxi,i);
        }
        
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extra)>=maxi){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};