class Solution {
public:
    
    
//     bool equalFrequency(string word) {
//         vector<int>v(26,0);
        
//         for(auto i:word){
//             v[i-'a']++;
//         }
        
//         for(int i=0;i<26;i++){
//             vector<int>temp=v;
//             if(v[i]<=0){
//                 continue;
//             }
//             temp[i]--;
//             set<int>s;
            
//             for(auto i:temp){
//                 if(i>0){
//                     s.insert(i);
//                 }
                
//             }
//             if(s.size()==1){
//                 return true;
//             }
//         }
//         return false;
        
//     }
// };



    
    
    


// bool equalFrequency(string word){

    
    
//     vector<int>mp(26,0);

//     for(auto i:word){
//         mp[i-'a']++;
//     }

//     for(int i=0;i<26;i++){
//         if(mp[i]==0)continue;

//         mp[i]--;

//         int fl=0, cnt=0, fl2=0; //fl for storing frequency 1st time, fl2 assures whether we get equal frequency or not

//         for(int i=0;i<26;i++){
//             if(mp[i]==0) continue;
            
//             if(fl==0)  //storing frequency of 1st char in cnt
//                 {
//                     cnt = mp[i];
//                     fl=1;
//                 }
                
//                 if(mp[i]!=cnt) 
//                 {
//                     fl2=1; 
//                     break;
//                 }
//             }
//             if(fl2==0) 
//             {
//                 return true; 
//             }

//             mp[i]++; //restoring frequency of char in mp 
//         }
//     return false;

//     }
// };
    
    
    
    
    
    
    bool equalFrequency(string word){
        bool ans=false;
        int n=word.size();
        
        
       for(int i=0;i<n;i++){
           if(ans==true){
               return true;
           }
           int total=0;
           unordered_map<char,int>mp;
           for(int j=0;j<n;j++){
               if(j==i){
                   continue;
               }
               mp[word[j]]++;
               total++;
           }
           
           int x=total/mp.size();
           bool flag=true;
           
           for(auto m:mp){
               if(m.second!=x){
                   flag=false;
                   break;
               }
              }
           
           if(flag==true){
               ans=ans||true;
           }  
       }
    return ans;    
    }
};