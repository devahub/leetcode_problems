class Solution {
public:
    long long solve(int l, int r, vector<int>& nums, int minK, int maxK)
    {
        vector<int> min_idx,max_idx;
        for(int i=l;i<=r;i++)
        {
            if(nums[i]==minK)
            {
                min_idx.push_back(i);
            }
            if(nums[i]==maxK)
            {
                max_idx.push_back(i);
            }
        }
        long long int ans=0;
        for(int i=l;i<=r;i++)
        {
            if(nums[i]==minK)
            {
                int index=lower_bound(max_idx.begin(),max_idx.end(),i)-max_idx.begin();
                if(index==max_idx.size())
                {
                    continue;
                }
                long long int val=r-max_idx[index]+1;
                ans+=val;
            }
            else if(nums[i]==maxK)
            {
                int index=lower_bound(min_idx.begin(),min_idx.end(),i)-min_idx.begin();
                if(index==min_idx.size())
                {
                    continue;
                }
                long long int val=r-min_idx[index]+1;
                ans+=val;
            }
            else
            {
                int first=lower_bound(min_idx.begin(),min_idx.end(),i)-min_idx.begin();
                int second=lower_bound(max_idx.begin(),max_idx.end(),i)-max_idx.begin();
                if(first==min_idx.size() || second==max_idx.size())
                {
                    continue;
                }
                int index=max(min_idx[first],max_idx[second]);
                long long int val=r-index+1;
                ans+=val;
            }
        }
        return ans;
    }
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        long long int ans=0;
        int left=0;
        vector<pair<int,int>> range;
        for(int right=0;right<nums.size();right++)
        {
            if(nums[right]<minK || nums[right]>maxK)
            {
                if(right-1>=left)
                {
                    range.push_back({left,right-1});
                }
                left=right+1;
            }
        }
        if(left!=nums.size())
        {
            if(nums.size()-1>=left)
            {
                range.push_back({left,nums.size()-1});
            }
        }
        for(int i=0;i<range.size();i++)
        {
            ans+=solve(range[i].first,range[i].second,nums,minK,maxK);
        }
        return ans;
    }
};