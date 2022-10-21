class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            int n=nums.size();
            unordered_map<int, int> mp;

            for (auto &i: nums)
            {
                mp[i]++;
            }
           vector<int>v;
            for (auto i: mp)
            {
                if (i.second > n/3)
                    v.push_back(i.first);
            }
            return v;
        }
};
    
    
    
    // boyer's moore algo--->
    
    
    
//  vector<int> majorityElement(vector<int> &nums){
     
     
//  }
// };