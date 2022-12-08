class Solution {
public:
    typedef long long ll;

    // using sliding window technique----->
    
    long long maximumSubarraySum(vector<int>& nums, int k) {
        ll i=0;
        ll j=0;
        ll sum=0;
        ll maxi=0;
        unordered_map<ll,ll>mp;
        
    while (j<nums.size()){
        sum=sum+nums[j];
        mp[nums[j]]++;

        if (j-i+1<k) j++; 
        
        else if ((j-i+1)==k)
        {
         if(mp.size()==k) {
                  maxi=max(maxi, sum);
              }
              j++;
              mp[nums[i]]--;
              if(mp[nums[i]]==0) mp.erase(nums[i]);
              sum-=nums[i];
              i++;
    }
        
  }
  return maxi;
    }
};
    