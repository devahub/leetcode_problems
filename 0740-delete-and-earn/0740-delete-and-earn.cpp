class Solution {
public:
  
//     int deleteAndEarn(vector<int>& nums) {
//         vector<int>freq(10001);
//         for(auto i:nums){
//                 freq[i]++;
//         }
//         int cp=0;
//         int ep=0;
        
//         for(int i=1;i<10001;i++)
//         {
//             int c=ep+(freq[i]*i);
//             ep=max(ep,cp);
//             cp=c;
//         }
//         return max(cp,ep);
//     }
// };


int deleteAndEarn(vector<int>& nums) {
		vector<int> freq(100001, 0);
		vector<int> dp(100001, 0);

		for (auto i : nums) freq[i]++;
		dp[1] = freq[1];

		for (int i=2; i<100001; i++)
				dp[i] = max(dp[i-2]+i*freq[i], dp[i-1]);

		return dp[100000];
}
};