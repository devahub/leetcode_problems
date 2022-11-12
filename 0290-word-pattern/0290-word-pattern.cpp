class Solution {
public:
//     bool wordPattern(string pattern, string s) {
//         unordered_map<char,string>mp;
//         vector<string>v;
        
//         string word;
//         stringstream iss(s);
//         while(iss >> word)
//           {
//               v.push_back(word);
//           }
        
//         set<string>st;
        
//         if(pattern.size()!=v.size())
//         {
//             return false;
//         }
        

        
//         for(int i=0;i<pattern.size();i++){

//           if(mp.find(pattern[i])!=mp.end()){    
    
    // if char is present already then it should match with                                                             //   previous one if not return false
    
//               if(mp[pattern[i]]!=v[i]){          
//                 return false;    
//               }
//           }
//               else{                                     // if not present previously then add to set
//                   if(st.count(v[i])>0){
//                       return false;
//                   }
//              mp[pattern[i]]=v[i];
//             st.insert(v[i]);
//           }  
//         }
// return true;
//     }
// };
    
    
    
     bool wordPattern(string p, string s){
         unordered_map<char,string>m;
         unordered_map<string,char>m2;
        int i=0;
		//using stringstrem for tokenizing on space( ' ' )
        stringstream str(s);
        string ss;
         
         while(getline(str,ss,' ')){
            if(m.count(p[i])==0 and m2.count(ss)==0){  //if letter or word have not occured yet
                m[p[i]]=ss;
                m2[ss]=p[i];
            }
          else{
             if(m[p[i]]!=ss or m2[ss]!=p[i])
                 return false;     
              
          }
             i++;
         }
         
         if(i<p.size())return false; //i.e. number  of words in pattern are less than letters in p
        return true; 
     }
};
    