class Solution {
public:
//     int lengthOfLongestSubstring(string s) {
       
//         int maxi=0;
//         set<char>st;
//         int i=0;
//         int r=0;
        
//         while(i<s.size() && r<s.size()){
//             if(st.find(s[r])==st.end()){
//                 st.insert(s[r]);
//                 int n=st.size();
//                 maxi=max(maxi,n);
//                 r++;
//             }
//             else{
//                 st.erase(s[i]);
//                 i++;
//             }
//         }
//         return maxi;
//     }
// };
    
    
    
     int lengthOfLongestSubstring(string s){
        int freq[256]={0};
         int l=0;
         int r=0;
         int ans=0;
         
         while(r<s.size()){
             freq[s[r]]++;
             while(freq[s[r]]>1){
                 freq[s[l]]--;
                 l++;
             }
             ans=max(ans,r-l+1);
             r++;
         }
         return ans;
     }
};