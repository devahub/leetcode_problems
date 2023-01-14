class Solution
{
    public:
    
    // brute force----->

//         int search(vector<int>& nums, int target) {

//             for(int i=0;i < nums.size();i++){
//                 if(nums[i]==target){
//                     return i;
//                 }
//             }

//             return -1;
//         }
// };
    
    
    
    
    
    ///  approach------>2--->binary search
    
       	// logic---if a sorted array is rotated then either half of the array is                sorted 
       	// now check if nums[mid]>=nums[l], the left array is sorted
       	// now if left array is sorted check if target is present in that or not
       	// do the same for nums[mid]<=nums[l]

        int search(vector<int> &nums, int target)
        {

            int l = 0;
            int h = nums.size() - 1;

            while (l <= h)
            {
                int mid = l + (h - l) / 2;
                if (target == nums[mid])
                {
                    return mid;
                }
                
                else if (nums[mid] >= nums[l])      // left array is sorted
                {
                    if (nums[l] <= target && target < nums[mid])
                        h = mid - 1;
                    else
                        l = mid + 1;
                }
                else                                // right array is sorted
                {
                    if (nums[mid] < target && target <= nums[h])
                        l = mid + 1;
                    else
                        h = mid - 1;
                }
            }

            return -1;
        }
};

