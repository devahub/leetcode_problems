class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,bool>mp;
        for(auto i:sentence){
            mp[i]=1;
        }
        return mp.size()==26;
    }
};