class Solution
{
    public:

       	// using erase function------->
       	//     int removeDuplicates(vector<int>& nums) {
       	//        if(nums.size()<=2){
       	//             return nums.size();
       	//         }

       	//        for(int i=0;i < nums.size()-2;i++){
       	//            if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
       	//                nums.erase(nums.begin()+i);
       	//                i--;
       	//            }
       	//        }
       	//         return nums.size();

        int removeDuplicates(vector<int> &nums)
        {

            if (nums.size() <= 2) return nums.size();
            int c = 1;
            int j = 1;

            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i - 1] == nums[i])
                {
                    c++;
                }
                else
                {
                    c = 1;
                }
                if (c <= 2)
                {
                    nums[j++] = nums[i];
                }
            }

            return j;
}
};