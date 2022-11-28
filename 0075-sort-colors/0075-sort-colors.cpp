class Solution
{
    public:
       // void sortColors(vector<int> &nums)
       // {
           	//        int lo=0;
           	//         int hi=nums.size()-1;
           	//             int i=0;
           	//         while(i<=hi){
           	//         switch(nums[i]){
           	//             case 0:
           	//                 swap(nums[lo++],nums[i++]);
           	//                break;

           	//             case 1:
           	//                 i++;
           	//                 break;

           	//             case 2:
           	//                 swap(nums[hi--],nums[i]);
           	//                 break;
           	//         }    
           	//         }   
           	//     }
            //  };
    
    

            
            
        void sortColors(vector<int> &nums)
        { 
            int low = 0;
            int high = nums.size() - 1;
            int mid = 0;

            while (mid <= high)
            {
                if (nums[mid] == 0)
                {
                    swap(nums[mid], nums[low]);
                    low++;
                    mid++;
                }
                else if (nums[mid] == 1)
                {
                    mid++;
                }
                else
                {
                    swap(nums[mid], nums[high]);
                    high--;
                }
            }
        }
};