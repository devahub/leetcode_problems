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

string reverseVowels(string s){
    vector<int>v;
    string temp="";

    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'
             || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                temp+=s[i];
                v.push_back(i);
            }
    }
    reverse(temp.begin(),temp.end());

    for(int i=0;i<v.size();i++){
        s[v[i]]=temp[i];
    }
return s;
}
};