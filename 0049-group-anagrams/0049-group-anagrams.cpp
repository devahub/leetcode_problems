class Solution
{
    public:
   	    vector<vector < string>> groupAnagrams(vector<string>& strs) {
   	       unordered_map<string,vector < string>>mp;
   	        vector<vector < string>>ans;

   	        for(auto i:strs)
   	        {
   	            string s=i;
   	            sort(s.begin(),s.end());
   	            mp[s].push_back(i);
   	        }

   	        for(auto i:mp)
   	        {
   	            ans.push_back(i.second);
   	        }
   	        return ans;
   	    }
   	};

   	// brut force-------->

   	//         vector<vector < string>>ans;
   	//         vector < string>v,res;
   	//         set < string>st;

   	//         for(auto i:strs){
   	//             string s=i;
   	//             sort(s.begin(),s.end());
   	//             v.push_back(s);
   	//             st.insert(s);

   	//         }
   	//         for(auto j:st){
   	//         for(int i=0;i < v.size();i++){
   	//             if(j==v[i])
   	//             { 
   	//                 res.push_back(strs[i]);
   	//             }
   	//          }
   	//             ans.push_back(res);
   	//             res.clear();
   	//         }
   	//         return ans;
   	// }
   	// };