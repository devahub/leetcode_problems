class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<int,int>mp;
        
        while(j<fruits.size()){
            mp[fruits[j]]++;
            
            while(mp.size()>2){
                
                 if(mp[fruits[i]]==1)
                {
                    mp.erase(fruits[i]);
                }
                else
                {
                    mp[fruits[i]]--;
                }
                i++;
                
                
            }
            ans=max(ans,j-i+1);
            j++;
        }
       return ans; 
    }
};