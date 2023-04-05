class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256]={0};
        int l=0;;
        int r=0;
        int ans=0;
        
        
        
        while(r<s.size()){
            arr[s[r]]++;
             while(arr[s[r]]>1)    //if the occurence become more than 1 means the char is repeated
            { 
                arr[s[l]]--;   //reduce the occurence of temp as it might be present ahead also in the string
                l++;       
            }
            
            ans=max(ans,r-l+1);
            r++;
            
        }
        
        
        
        
        return ans;
    }
};