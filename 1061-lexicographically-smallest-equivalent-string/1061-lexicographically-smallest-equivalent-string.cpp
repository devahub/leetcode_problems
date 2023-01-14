class Solution {
public:
//    int par[26];
    
//     int find(int x){
//         if(par[x]==-1) return x;
//         return par[x]=find(par[x]);
//     }
    
//     void Union(int x, int y) {
//         x = find(x);
//         y = find(y);
        
//         if (x != y) 
//             par[max(x, y)] = min(x, y); 
//     }
	
//     string smallestEquivalentString(string s1, string s2, string baseStr) {
        
//         memset(par, -1, sizeof(par));
        
//         for (auto i = 0; i < s1.size(); ++i) 
//             Union(s1[i] - 'a', s2[i] - 'a');
        
//         for(auto i=0;i<baseStr.size();i++) 
//             baseStr[i]=find(baseStr[i]-'a')+'a';

//         return baseStr;
//     }
// };
    
    
    
    
    
    
    
    ///  approach---2  easy peasy
    
     string smallestEquivalentString(string s1, string s2, string baseStr){
  
         char mp[26];
         
          for (int i=0; i<26; i++)
          {
              mp[i] = 'a' + i;
          }
         
         for(int i=0;i<s1.size();i++){
            char toreplace=max(mp[s1[i]-'a'],mp[s2[i]-'a']);
            char replacewith = min(mp[s1[i]-'a'], mp[s2[i]-'a']);
             
             for(int i=0;i<26;i++){
                 if(mp[i]==toreplace){
                     mp[i]=replacewith;
                 }
             }
         }
         
         
         
       for (int i = 0; i<baseStr.size(); i++)
            baseStr[i] = mp[baseStr[i]-'a'];

        return baseStr;   
         
     }
};