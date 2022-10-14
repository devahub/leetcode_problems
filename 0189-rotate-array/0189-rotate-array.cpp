class Solution
{
    public:

       	// rotate all elements by 1 positon k times--->TLE 

//         void rotateby1(vector<int> &nums)
//         {
//             int n = nums.size();
//             int temp = nums[n - 1];
            
//             for(int i=n-1;i>0;i--){
//                 nums[i]=nums[i-1];
//             }
//             nums[0]=temp;
//         }

//     void rotate(vector<int> &nums, int k)
//     {
//         for (int i = 0; i < k; i++)
//         {
//             rotateby1(nums);
//         }
//     }
// };

// 2 nd approach---->

    void reverse(vector<int>&nums,int i,int j)
    {
        int l=i;
        int r=j;

        while(l < r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }
    }    

    void rotate(vector<int>& nums, int k) {

        k=k%nums.size();

        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);
      }
};

//      1234567----->partition into two halves such that using k=k%nums.size()

//          reverse 1234   reverse 567
//             4321765
//      now reverse this whole   5671234

/// without making reverse function--->

// k = k%nums.size();
// reverse(nums.begin(), nums.end());
// reverse(nums.begin(), nums.begin()+k);
// reverse(nums.begin()+k, nums.end());