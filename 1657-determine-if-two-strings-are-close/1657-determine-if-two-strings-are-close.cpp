class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
        {
            return false;
        }
        
        map<char,int>mp1;
        map<char,int>mp2;
        string a1="",a2="";
        for(int i=0;i<word1.size();i++)
        {
           mp1[word1[i]]++;
           mp2[word2[i]]++;

        }
        vector<int>p1,p2;
        for(auto it1:mp1)
        {
            a1+=it1.first;
            p1.push_back(it1.second);
        }       
        
        for(auto it2:mp2)
        {
            a2+=it2.first;
            p2.push_back(it2.second)   ;       
        }   
        
        sort(p1.begin(),p1.end());
        sort(p2.begin(),p2.end());

        for(int i=0;i<p1.size();i++)
        {
            if(p1[i]!=p2[i])
            {
                return false;
            }
        }

        if( a1!=a2)
        {
            return false;
        }
        
        return true;
    }
};