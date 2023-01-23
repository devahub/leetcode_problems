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
    
    
    //   using sliding window and hashmap
    
     int lengthOfLongestSubstring(string s){
        int freq[256]={0};
         int l=0;
         int r=0;
         int maxi=0;
         
         while(r<s.size()){
             freq[s[r]]++;
             while(freq[s[r]]>1){
                 freq[s[l]]--;
                 l++;
             }
                maxi=max(maxi,r-l+1);
                r++;
         }
         return maxi;
     }
};
    
    
    
    
    
//       int lengthOfLongestSubstring(string s){
//           unordered_map<char,int>mp;
//           int res=0;
//           int start=0;
          
//           for(int i=0;i<s.size();i++){
//                 if(mp.find(s[i])!=mp.end() && mp[s[i]] >=start)
//                 {
//                     start=mp[s[i]]+1;
//                 }
//             mp[s[i]]=i;
//            res=max(res,i-start+1);   
//           }
//          return res;
//       }
// };