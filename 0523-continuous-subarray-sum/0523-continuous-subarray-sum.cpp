class Solution {
public:
//     bool checkSubarraySum(vector<int>& nums, int k) {
//        int n = nums.size();
//         vector<int> pre (n);
//         pre[0] = nums[0];
//         for (int i=1; i<n; i++) 
//             pre[i] = pre[i-1] + nums[i];
    
//         for (int i=0; i<n; i++) {
//             pre[i] %= k;
//             if (pre[i]==0 && i!=0) return true;
//         }
        
//         unordered_map<int, int> mp;
//         for (int i=0; i<n; i++) {
//             if (mp[pre[i]]) {
//                 if ((i+1-mp[pre[i]])>=2) return true;
//             }
//             else 
//                 mp[pre[i]] = i+1;
//         }
        
//         return false;
        
//     }
// };
    
    
bool checkSubarraySum(vector<int>& nums, int k) {
     
	int prefSum = 0;
	unordered_map<int, int> mp;
	for(int i=0; i<nums.size(); i++)
	{
		prefSum += nums[i];
		prefSum %= k;

		if(prefSum == 0 && i) return true;

		// cout << prefSum << " ";
		if(mp.find(prefSum) != mp.end())  // Found the required prefix sum 
		{
			if(i - mp[prefSum] > 1) return true; // check if atleast 2 elements are there or not
		}
		else mp[prefSum] = i;
	}

	return false;
 }
};