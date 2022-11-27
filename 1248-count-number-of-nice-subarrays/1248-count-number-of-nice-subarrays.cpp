class Solution {
public:
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        
//         unordered_map<int, int> mp;
//         vector<int> pre (nums.size());
//         int cnt=0;
        
//         pre[0] = nums[0]%2;
//         if (pre[0]==k) cnt++;
//         mp[pre[0]] += 1;
        
//         for (int i=1; i<nums.size(); i++) {
//             pre[i] = pre[i-1] + nums[i]%2;
//             if (pre[i]==k) 
//                 cnt++;
//             if (mp[pre[i]-k]) 
//                 cnt += mp[pre[i]-k];
//             mp[pre[i]] += 1;
//         }
//         return cnt;

      int j = 0, odd = 0, count = 0, total = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]%2!=0) {
                odd++;
                if (odd >= k) {
                    count = 1;
                    while (!(nums[j++] & 1)) 
                        count++;
                    total += count;
                }
            } else if (odd >= k) 
                total += count;
        }
        return total;
    }
};