class Solution {
public:
    
    
    vector<int>original;
    int n;
    
    Solution(vector<int>& nums) {
        original=nums;
        n=nums.size();
    }
    
    
    
    vector<int> reset() {
        return original;
    }
    
    
     vector<int> shuffle() {
         
        vector<int>shuffled=original;
			
			random_shuffle(shuffled.begin(),shuffled.end());
			return shuffled;
    }
};