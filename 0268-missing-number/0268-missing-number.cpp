class Solution
{
    public:
        int missingNumber(vector<int> &nums)
        {
           	// approach 1 hashmap

           	//         map<int,int>mp;

           	//         for(auto i:nums){
           	//             mp[i]++;

           	//             }
           	//         for(int j=0;;j++){
           	//             if(mp[j]==0){
           	//                 return j;
           	//             }
           	//         }
           	//         return -1;

           	// approach-2---->

            int n = nums.size();
            sort(nums.begin(), nums.end());

            int ans = n;

            for (int i = 0; i < n; i++)
            {

                if (nums[i] != i)
                {
                    ans = i;
                    break;
                }
            }

            return ans;
        }
};