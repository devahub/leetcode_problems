class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    bool check=false;
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums2[j])
                        {
                            v.push_back(nums2[k]);
							check=true;
							break;
                        }
                    }
                    if(!check)v.push_back(-1);
                }
            }
        }
        return v;
    }
};