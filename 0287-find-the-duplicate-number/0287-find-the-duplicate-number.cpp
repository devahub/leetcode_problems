class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
            // int d = 0;
            unordered_map<int, int> mp;
            for (auto i: nums) mp[i]++;

            for (auto i: mp)
            {
                if (i.second > 1)
                {
                    return i.first;
                }
            }
            return -1;
        }
};