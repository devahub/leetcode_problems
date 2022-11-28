class Solution
{
    public:

       	// do what is told--->
       	// use movezeroes function from movezeroes ques ------>

        void moveZeroes(vector<int> &nums)
        {
            stack<int> s;

            for (auto i: nums)
            {
                if (i != 0)
                {
                    s.push(i);
                }
            }
            for (auto i: nums)
            {
                if (i == 0)
                {
                    s.push(i);
                }
            }

            int pos = nums.size() - 1;
            while (!s.empty())
            {
                nums[pos] = s.top();
                s.pop();
                pos--;
            }
        }

    vector<int> applyOperations(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] = nums[i] *2;
                nums[i + 1] = 0;
            }
        }
        moveZeroes(nums);
        return nums;
    }
};