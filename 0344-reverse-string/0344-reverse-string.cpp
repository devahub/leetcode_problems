class Solution {
public:
    void reverseString(vector<char>& s) {
//         reverse(s.begin(),s.end());
        
        int l=0;
        int h=s.size()-1;
        
        while(l<h){
            swap(s[l++],s[h--]);
        }
        
        
        
    }
};