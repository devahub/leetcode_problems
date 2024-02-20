class Solution {
public:
    
    
//     int findDuplicate(vector<int>& nums) {
//                     unordered_map<int, int> mp;
//        	            for (auto i: nums) mp[i]++;

//        	            for (auto i: mp)
//        	            {
//        	                if (i.second > 1)
//        	                {
//        	                    return i.first;
//        	                }
//        	            }
//        	            return -1;
        
//     }
// };
    
    
       // Using Sorting
    // TC: O(nlogn)
   int findDuplicate(vector<int>& nums)  {
        // sort the numbers and find the number which has duplicate
        // by checking the one which has the same at next position
        sort(nums.begin(), nums.end());
        
        int duplicate = 0;
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1]) {
                duplicate = nums[i];
                break;
            }
        return duplicate;
    }
};