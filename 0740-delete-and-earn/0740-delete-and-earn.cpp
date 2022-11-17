class Solution {
public:
  
    int deleteAndEarn(vector<int>& nums) {
        vector<int>freq(10001);
        for(auto i:nums){
                freq[i]++;
        }
        int cp=0;
        int ep=0;
        
        for(int i=1;i<10001;i++)
        {
            int c=ep+(freq[i]*i);
            ep=max(ep,cp);
            cp=c;
        }
        return max(cp,ep);
    }
};