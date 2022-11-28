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
        vector<int> shuffled = original;
			
			int l = n;
			for(int i = n-1; i>=0; i--) {
				
				int j = rand()%l;
				
			
				swap(shuffled[i], shuffled[j]);
				l--;
			}
			return shuffled;
    }
};