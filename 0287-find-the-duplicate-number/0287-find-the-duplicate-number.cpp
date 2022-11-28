class Solution
{
    public:
       	//         int findDuplicate(vector<int> &nums)
       	//         {

       	//             unordered_map<int, int> mp;
       	//             for (auto i: nums) mp[i]++;

       	//             for (auto i: mp)
       	//             {
       	//                 if (i.second > 1)
       	//                 {
       	//                     return i.first;
       	//                 }
       	//             }
       	//             return -1;
       	//         }
       	// };

// without extra space and modifying the array---> take no at first index and then move to that index and and repeat this in test case 1-->
       	// 1->3->2->4->2 here we found a cycle so now we will user slow and fast pointer method to find that point 2

        int findDuplicate(vector<int> &nums)
        {
            int slow = nums[0];
            int fast = nums[0];

//NOTE: We are using do-while loop here, because at the very first step 'fast==slow'. you can use normal while loop also, but for that you have to add additional conditions also.

            do {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }
          
           
            while (slow != fast);

//We have met our first collision, now we have to find out the value for which the collision happened
            fast = nums[0];
            while (slow != fast)
            {
                fast = nums[fast];
                slow = nums[slow];
            }
            
            return slow;
        }
};