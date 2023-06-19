class Solution {
public:
    
   
// using inbuilt function----->

//     string reverseVowels(string s) {

//     for (int i = 0, j = s.size() - 1; i < j; ) 
//             if ((i=s.find_first_of("aeiouAEIOU", i)) < (j=s.find_last_of("aeiouAEIOU", j)))
//               swap(s[i++], s[j--]);
        
//         return s;
//     }
// };



// vector soln--->

// string reverseVowels(string s){
//     vector<int>v;
//     string temp="";

//     for(int i=0;i<s.size();i++){
//         if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'
//              || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
//             {
//                 temp+=s[i];
//                 v.push_back(i);
//             }
//     }
//     reverse(temp.begin(),temp.end());

//     for(int i=0;i<v.size();i++){
//         s[v[i]]=temp[i];
//     }
// return s;
// }
// };
    
    
    
    
    
    
    
    // two pointer
    
      string reverseVowels(string s) 
    {
        int i = 0;
        int j = s.size()-1;
        
        while(i<j)
        {
            bool flag1 = false, flag2 = false;   // to check if we are pointing to a vowel or not
            
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            flag1 = true;
            
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
            flag2 = true;
            
            if(flag1 && flag2)   // if both are pointing to vowels just swap them
            {
                swap(s[i],s[j]);
                i++;j--; 
            }
            
            if(!flag1)    // if i is not pointing to a vowel, move the pointer forward
            i++;
            if(!flag2)    // if j is not pointing to a vowel, move the pointer backwards
            j--;
        }
        
        return s;
    } 
};