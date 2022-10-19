class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        
        unordered_set<int>s;
        int maxi=INT_MIN;
        int c=0;
        
        for(auto i:nums){
            s.insert(i);
        }
        
        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            c=1;
            if(s.find(nums[i]-1)!=s.end()){
                continue;
            }
            while(s.find(ele+1)!=s.end()){
                c+=1;
                ele+=1;
            }
            maxi=max(maxi,c);
            if(maxi==n)
                break;
        }
        return maxi;
        
    }
};