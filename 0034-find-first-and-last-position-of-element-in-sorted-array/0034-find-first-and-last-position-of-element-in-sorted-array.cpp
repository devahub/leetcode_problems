class Solution {
public:
      
    
    // using stl only---->lower and upper bound---->
    
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         auto low=lower_bound(nums.begin(),nums.end(),target);
//         auto up=upper_bound(nums.begin(),nums.end(),target);
        
//         if(low==nums.end() || *low!=target){
//             return {-1,-1};
//         }
 
//         int l=low-nums.begin();
//         int h=up-nums.begin()-1;
//         return {l,h};
//         }
// };
    
    
    
    // two times binary search to find for first and last position
    
    vector<int> searchRange(vector<int>& nums, int target) {
    int start = bs(nums, target, true);
    int end = bs(nums, target, false);

    return vector<int>({start, end});
  }

  int bs(vector<int>& nums, int target, bool firstindex) {
    int ans = -1;
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
      int m = l + (r - l) / 2;

      if (target > nums[m])
        l = m + 1;
      else if (target < nums[m])
        r = m - 1;
      else {
        ans = m;
          
          
        if (firstindex==true)
          r = m - 1;
        else
          l = m + 1;
      }
    }

    return ans;
  }
};