class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n=nums.size();
        // given 0 indexed integer array
        //consecutive pairs have opposite signs
        vector<int>ans;
        vector<int> neg;//
        vector<int> pos;//
        for(int x:nums){
            if(x<0){
                neg.push_back(x);// -2 -5 -4
            }
            else pos.push_back(x);// 3 1 2
        }
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(pos[j]);
                j++;
            }
            else{
                ans.push_back(neg[k]);
                k++;
            }
        }
        return ans;
    }
};