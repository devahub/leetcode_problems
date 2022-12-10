class Solution {
public:

    
//     int longestPalindrome(vector<string>& words) {
//         unordered_map<string,int>mp;
//         int ans=0,m=0;
//         bool flag=false;

//         for(auto i:words){
//             mp[i]++;
//         }
        
//         for(auto i:mp){
//             string s=i.first;
//             string t=s;
//             reverse(s.begin(),s.end());
//             if(s==t){
//                ans+=i.second/2;
//                if(i.second%2)      // if occuring even no of times
//                 flag=true;
//         }
//         else
//         {
//             if(mp.count(s))
//                 ans+=min(i.second,mp[s]);
//                 mp.erase(s);
//         }
//     }
//     ans=ans*4;                  
//     if(flag==true) 
//         ans+=2;
//     return ans;
// }

// };
            



// here could be 2 types of string
// -> same characters (aa)
// -> different characters (ab,cd etc)

// If we have encountered both ab and ba we increment min(ab,ba)*4 freq from map
// If we encounter even number of aa,bb etc:- we take all of them into account.
// If we encounter any odd number of aa, bb etc:- we can do count+=2 because any one of that could be put in the middle.
    
    
    
    
//      int longestPalindrome(vector<string>& words){
//          map<string,int>mp;
//          int ans=0;
//          bool flag=false;
//          int len=0;
         
//          for(auto i:words){
//              mp[i]++;
//          }
         
//          for(auto i:mp){
//              if(i.first[0]==i.first[1]){
//                  if(i.second%2!=0){
//                      flag=true;
//                      len+=i.second-1;
//                  }
//                  else{
//                      len+=i.second;
//                  }
//                  mp.erase(i.first);
//              }
//              else{
//                  string s=i.first;
//                  reverse(s.begin(),s.end());
//                  if(mp.find(s)!=mp.end()){
//                      ans+=min(mp[s],i.second)*4;
//                  }
//                  mp.erase(s);
//                  mp.erase(i.first);
//              }
//          }
       
//          if(flag){
//              return ans+len*2+2;
//          }
//          return ans+len*2;
//      }
// };






// using dp----> since the length of each string is 2 only so we can store them in dp--->

     int longestPalindrome(vector<string>& words) {
        
       int count[26][26] = {}; 
       int ans =0;
        
			for(auto w : words){
				int a = w[0] - 'a';
				int b = w[1] - 'a'; 

				if(count[b][a]){
					ans+= 4;          
					count[b][a]--;   // decrement the count as we found mirror word
				}else
					count[a][b]++;  //increment the current word count if we not find any mirror word
			}
        
			for(int i=0;i<26;i++){
				if(count[i][i]){
					ans+=2;
					break;
				}
			 }
      
	return ans;
         
    }
};